# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main(void) {
	int card_num, num, sum = 0, temp = 0;
	scanf("%d %d", &card_num, &num);
	int* card = (int*)malloc(sizeof(int) * card_num);  // �޸� ������ ���� �����Ҵ�
	for (int i = 0; i < card_num; i++) {
		scanf("%d", &card[i]);
	}

	//���Ʈ ���� �˰��� ������ �տ������� 3���� ��� �յ��� ���� ���غ�

	for (int i = 0; i < card_num - 2; i++) { // ������ �Ѿ�� �ʱ� ���� card_num - 2
		for (int j = i + 1; j < card_num - 1; j++) { // card_num - 1
			for (int k = j + 1; k < card_num; k++) { // card_num�� ������
				sum = card[i] + card[j] + card[k]; // �� ���غ���
				if (sum <= num && temp < sum) { // ���� ��ǥ���� �۰ų� �����鼭 ���ߴ� �յ��߿� ����ũ��
					temp = sum; // �� ���� �����
				}
				sum = 0;
			}
		}
	}
	printf("%d\n", temp);

	return 0;
}	