#include <stdio.h>

int main(void) {
	int file_size = 0;
	FILE* fp = fopen("jin.dat", "rb");
	if (NULL != fp) {
		fseek(fp, 0, SEEK_END); 
		file_size = ftell(fp);
		printf("파일 크기: %d\n", file_size);
		fclose(fp);
	}
	return 0;
}