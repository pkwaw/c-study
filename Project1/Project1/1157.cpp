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
	for (int i = 0; i < 26; i++) {  //각 알파벳 마다의 카운트 배열을 0으로 초기화 하고 알파벳 배열을 A~Z까지 초기화함
		count[i] = 0;
		alphabet[i] = alp;
		alp++;
	}
	for (int i = 0; i < 26; i++) {  // 입력받은 글자배열의 크기만큼 비교해가면서 소문자나 대문자 기준의 알파벳이 있는지 체크
		for (int j = 0; j < strlen(input); j++) {
			if (input[j] == (char)('a' + i) || input[j] == (char)('A' + i)) {
				count[i] += 1;
			}
		}
	}
	for (int i = 0; i < 26; i++) { // max가 0인 상태에서 알파벳이 있는 경우 count배열의 숫자가 늘어났을 꺼고 겹치는 거므로 max값을 증가시켜줌
		if (max < count[i]) {
			max = count[i];
			result = i;  // 뒤에서 출력할때 가장 많이 나온 알파벳이 필요하기에 결과값에 넣어놓음
		}
	}
	for (int i = 0; i < 26; i++) {  // 같은 갯수의 max값이 존재하면 ?를 출력해야 하므로 num값의 유무가 필요함
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