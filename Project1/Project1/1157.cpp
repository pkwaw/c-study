#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char input[1000001];
	char alphabet[26];
	int count[26];
	int max = 0;
	int result = 0;
	int num = 0;
	char alp = 'A';
	scanf("%s", input);
	for (int i = 0; i < 26; i++) {  //�� ���ĺ� ������ ī��Ʈ �迭�� 0���� �ʱ�ȭ �ϰ� ���ĺ� �迭�� A~Z���� �ʱ�ȭ��
		count[i] = 0;
		alphabet[i] = alp;
		alp++;
	}
	for (int i = 0; i < 26; i++) {  // �Է¹��� ���ڹ迭�� ũ�⸸ŭ ���ذ��鼭 �ҹ��ڳ� �빮�� ������ ���ĺ��� �ִ��� üũ
		for (int j = 0; j < strlen(input); j++) {
			if (input[j] == (char)('a' + i) || input[j] == (char)('A' + i)) {
				count[i] += 1;
			}
		}
	}
	for (int i = 0; i < 26; i++) { // max�� 0�� ���¿��� ���ĺ��� �ִ� ��� count�迭�� ���ڰ� �þ�� ���� ��ġ�� �ŹǷ� max���� ����������
		if (max < count[i]) {
			max = count[i];
			result = i;  // �ڿ��� ����Ҷ� ���� ���� ���� ���ĺ��� �ʿ��ϱ⿡ ������� �־����
		}
	}
	for (int i = 0; i < 26; i++) {  // ���� ������ max���� �����ϸ� ?�� ����ؾ� �ϹǷ� num���� ������ �ʿ���
		if (max == count[i]) {
			num++;
		}
	}
	if (num == 1) {
		printf("%c", alphabet[result]);
	}
	else {
		printf("?");
	}
	return 0;
}