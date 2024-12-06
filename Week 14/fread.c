#include <stdio.h>

int main() {
	int data1,
		data2,
		data_list[5];
	FILE* fp = fopen("jin.dat", "r");

	if (fp != NULL) {
		fread(&data1, sizeof(int), 1, fp);
		fread(&data2, sizeof(int), 1, fp);
		fread(data_list, sizeof(int) * 5, 1, fp);
		printf("file data : %d(0x%04)\n", data1, data1);
		printf("file data : %d\n", data2);
		for (int i = 0; i < 5; i++) {
			printf("data_list : %d\n", data_list[i]);
		}
		fclose(fp);
	}

	return 0;
}