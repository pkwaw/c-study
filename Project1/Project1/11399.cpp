#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {
	int inputPerson, temp, sum1 = 0, sum2 = 0;
	scanf("%d", &inputPerson);
	int* inputTime = (int*)malloc(sizeof(int) * inputPerson);
	for (int i = 0; i < inputPerson; i++) {
		scanf("%d", &inputTime[i]);
	}
	for (int i = 0; i < inputPerson; i++) {   // �ʿ��� �ð� ���������� ���� �������� ����
		for (int j = 0; j < inputPerson - 1 - i; j++) {
			if (inputTime[j] > inputTime[j + 1]) {
				temp = inputTime[j];
				inputTime[j] = inputTime[j + 1];
				inputTime[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < inputPerson; i++) {  // �ʿ��� �ð� �� ���ؼ� ���
		sum1 += inputTime[i];
		sum2 += sum1;
	}
	printf("%d", sum2);
	return 0;
}