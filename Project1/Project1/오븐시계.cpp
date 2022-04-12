#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int h, m, input, temp;
	scanf("%d %d", &h, &m);
	scanf("%d", &input);
	m += h * 60;
	m += input;
	h = m / 60;
	m = m % 60;
	if (h > 23) {
		h -= 24;
	}
	printf("%d %d", h, m);
	return 0;
}