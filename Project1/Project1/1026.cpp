#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <malloc.h>
int main(void) {
	int input, temp, result = 0;
	scanf("%d", &input);
	int* a = (int*)malloc(sizeof(int) * input); // �����Ʃ����� �۵� ���ؼ� �����Ҵ� ���
	int* b = (int*)malloc(sizeof(int) * input);
	int* c = (int*)malloc(sizeof(int) * input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < input; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < input; i++) { // b�迭�� ��迭�ϸ� �ȵǹǷ� c�迭�� �Է��ؼ� ����
		c[i] = b[i];
	}
	// b�� �迭�� ���� ���� �ּҰ��� ã������ a�迭�� �������� b�迭�� ������������ �����ؾ���
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