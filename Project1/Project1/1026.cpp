#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <malloc.h>
int main(void) {
	int input, temp, result = 0;
	scanf("%d", &input);
	int* a = (int*)malloc(sizeof(int) * input); // 비쥬얼스튜디오상 작동 안해서 동적할당 사용
	int* b = (int*)malloc(sizeof(int) * input);
	int* c = (int*)malloc(sizeof(int) * input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < input; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < input; i++) { // b배열은 재배열하면 안되므로 c배열에 입력해서 정렬
		c[i] = b[i];
	}
	// b의 배열이 변함 없이 최소값을 찾으려면 a배열은 내림차순 b배열은 오름차순으로 정리해야함
	for (int i = 0; i < input - 1; i++) {
		for (int j = 0; j < input - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}

	}
	for (int i = 0; i < input - 1; i++) {
		for (int j = 0; j < input - 1 - i; j++) {
			if (c[j] > c[j + 1]) {
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}

	}
	for (int i = 0; i < input; i++) {
		result += a[i] * c[i];
	}
	printf("%d", result);
	return 0;
}