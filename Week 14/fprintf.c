#include <stdio.h>

int main() {
	char* string = "Hello, World!";
	short int data = 0xAEFC;

	//���� ���� �ؽ�Ʈ ���� ����
	FILE* p_file = fopen("hello.txt", "wt");

	if (p_file != NULL) {
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("���� ������ ����");

		fclose(p_file);
	}
	return 0;
}