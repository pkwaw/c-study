#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char input[101];
	char alp[26];
	char A = 'a';
	int array[26];
	scanf("%s", input);
	for (int i = 0; i < 26; i++) { // alp�迭�� a~z���� �ʱ�ȭ �ϰ� array �迭�� -1 �Է�
		alp[i] = A;
		array[i] = -1;
		A++;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(input); j++) {  // �Է��� �迭���� ���ĺ� �迭�� ������� ���ڷ� ��ġ �Է�
			if (input[j] == alp[i]) {
				array[i] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}