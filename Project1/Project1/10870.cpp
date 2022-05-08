#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n) {
	if (n == 0 ) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return rec_func(n - 1) + rec_func(n - 2);

}

int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d", rec_func(a));
	return 0;
}

