#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) { // ó���� int������ �޾Ƽ� for�� �ȿ��� ó���ߴµ� �غ��ϱ� �Է��� ����� ���� �� ���� ����� Ŀ�� ���ڿ� ���
	int input, sum = 0;
	scanf("%d", &input);
	char arr[101];
	scanf("%s", arr);
	for (int i = 0; i < input; i++) {
		sum += arr[i] - 48; // ���ڿ��� ���� ���̱⿡ �ƽ�Ű�ڵ� 48 ��ŭ ���� �������
	}
	printf("%d", sum);
	return 0;
}