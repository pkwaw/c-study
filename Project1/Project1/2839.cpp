#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, result = 0;
	scanf("%d", &a);
	while (1) {
		if (a % 5 == 0) { // �Է��� ���� 5�ǹ���̸� �״�� ����
			break;
		}
		if (a < 0) { // ���� ������ �Ǹ� ������ �� ������ ���ϹǷ� -1 ���
			result = -1;
			break;
		}
		a = a - 3;  // 5�� ����� �ƴϹǷ� 3�� ���� ���氹�� 1���� �÷��ָ��
		result++;
	}
	if (result >= 0) { // -1�ΰ�� ���������ϴ� ���� �������� ������ �����
		result += a / 5; // 3�ǹ�� ���̽��� ������ �ذ������ϱ� 5�ǹ���� ���̽��� ���� ���� ���
	}
	printf("%d", result);
	return 0;
}