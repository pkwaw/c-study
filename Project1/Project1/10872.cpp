#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * rec_func(n - 1);
	}
	
}

int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d", rec_func(a));
	return 0;
}

