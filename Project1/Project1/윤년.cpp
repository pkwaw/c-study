#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input;
	scanf("%d", &input);
	if (input % 4 == 0 && (input % 100 != 0 || input % 400 == 0)) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}