#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b, temp1, temp2;
	scanf("%d %d", &a, &b);
	temp1 = 100 * (a % 10) + 10 * (a % 100 / 10) + a / 100;
	temp2 = 100 * (b % 10) + 10 * (b % 100 / 10) + b / 100;
	if (temp1 > temp2) {
		printf("%d", temp1);
	}
	else {
		printf("%d", temp2);
	}
	return 0;
}