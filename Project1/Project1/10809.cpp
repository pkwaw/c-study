#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char input[101];
	char alp[26];
	char A = 'a';
	int array[26];
	scanf("%s", input);
	for (int i = 0; i < 26; i++) { // alp배열에 a~z까지 초기화 하고 array 배열에 -1 입력
		alp[i] = A;
		array[i] = -1;
		A++;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(input); j++) {  // 입력한 배열에서 알파벳 배열이 있을경우 숫자로 위치 입력
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