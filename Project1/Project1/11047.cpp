#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {
	int input, money, result = 0;
	scanf("%d %d", &input, &money);
	int* inMoney = (int*)malloc(sizeof(int) * input); // �����Ʃ����� int inMoney[input] �۵� ���ؼ� �����Ҵ� ���
	for (int i = input - 1; i >= 0; i--) { // ������������ �Է¹޾Ƽ� �Ʒ� for�������� ������������ �۵� ����
		scanf("%d", &inMoney[i]);
	}
	for (int i = 0; i < input; i++) {
		result += money / inMoney[i]; // ū�ݾ׺��� ������ �����ؼ� ���� ���� �÷���
		money %= inMoney[i]; // �������� ���� �������� �ݾ� ����
		if (inMoney[i] == inMoney[input]) { // �ݾ��� �ּұݾ��� ����� �Ǹ� �� ������ŭ ���� ���� �ø��� ��
			result += money / inMoney[i];
		}
	}
	printf("%d", result);
	return 0;
}
