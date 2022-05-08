#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		for (int j = i; j < input - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}