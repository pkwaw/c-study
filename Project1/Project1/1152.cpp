#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char input[1000001];
	int len, count = 0;
	
	scanf("%[^\n]s", input);  // ����Ű �Ǵ� ��ٲ��� ������ ������ ���ڿ��� �Է¹��� %s�� %c�δ� ������ �ν��� �ȵǼ� �̿�
	len = strlen(input);
	if (input[0] == ' ' && input[1] == '\0') { // ù��° ���ڰ� �����̰� �������ڰ� ������
		printf("0");
		return 0;
	}
	else if(input[0] != ' ' && input[1] == '\0') { // ù��° ���ڰ� ������ �ƴϰ� �������ڰ� ������
		printf("1");
		return 0;
	}
	for (int i = 1; i < len; i++) {  //ù��° ���ڰ� �����̰ų� �����ϰ��� ������ ó�������Ƿ� 1��°���� ����
		if (input[i] == ' ' && input[i+1] != '\0' && input[i+1] != ' ') {  // ������ ������ �������ڰ� �����ϰ� ���������� ������ �ƴ� �� �ܾ�� �߰�
			count++;
		}
	}
	
	printf("%d", count + 1);
	return 0;
}