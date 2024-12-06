#include <stdio.h>

int Sum(int a, int b) {
	return a + b;
}
int Sub(int a, int b) {
	return a - b;
}
int Mul(int a, int b) {
	return a * b;
}
int Div(int a, int b) {
	return a / b;
}

int main() {
	int(*p[4])(int, int) = {
		&Sum, &Sub, &Mul, &Div
	};
	char op_table[4] = { '+', '-', '*', '/' };

	int x = 8, y = 4;
	for (int i = 0; i < 4; i++) {
		printf("%d %c %d = %d\n",
			x, op_table[i], y, (*p[i])(x, y));
	}

	return 0;
}