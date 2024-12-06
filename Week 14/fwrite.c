#include <stdio.h>

int main() {
	int data1 = 0x000000412,
		data2 = 100,
		data_list[5] = { 0, 1, 2, 3, 4 };
	FILE* fp = fopen("jin.dat", "w");
	if (fp != NULL) {
		fwrite(&data1, sizeof(int), 1, fp);
		fwrite(&data2, sizeof(int), 1, fp);

		//fwrite(data_list, sizeof(int), 5, fp);
		//fwrite(data_list, sizeof(int) * 5, 1, fp);
		fwrite(data_list, sizeof(data_list), 1, fp);

		fclose(fp);
	}
}