#include <stdio.h>

int main() {
	int num;
	int num_arr[10] = {
		412, 413, 414, 415, 416,
		417, 418, 419, 420, 412
	};
	FILE* fp = fopen("nums.txt", "wt");
	if (fp != NULL) {
		printf("������ ���������� ���Ƚ��ϴ�\n");

		for (int i = 0; i < 10; i++) {
			fprintf(fp, "%d\n", num_arr[i]);
		}

		printf("���Ͽ� ������ ����ϴ�");

		if (fp != NULL) {
			while (fscanf_s(fp, "%d", &num) != -1) {
				printf("%d ", num);
			}
		}
		fclose(fp);
	}
}