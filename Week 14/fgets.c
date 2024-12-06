#include <stdio.h>

int main() {
	char temp[100];
	FILE* fp = fopen("long.txt", "rt");

	if (fp != NULL) {
		while (fgets(temp, sizeof(temp), fp) != NULL) {
			printf("%s\n", temp);
		}
		fclose(fp);
	}
	return 0;
}