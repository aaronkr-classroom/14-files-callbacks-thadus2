#include <stdio.h>

int main() {
	char* string = "Hello, World!";
	short int data = 0xAEFC;

	//쓰기 모드로 텍스트 파일 오픈
	FILE* p_file = fopen("hello.txt", "wt");

	if (p_file != NULL) {
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("파일 내용을 썼어요");

		fclose(p_file);
	}
	return 0;
}