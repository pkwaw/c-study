#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char input[1000001];
	int len, count = 0;
	
	scanf("%[^\n]s", input);  // 엔터키 또는 행바꿈이 나오기 전까지 문자열을 입력받음 %s나 %c로는 공백이 인식이 안되서 이용
	len = strlen(input);
	if (input[0] == ' ' && input[1] == '\0') { // 첫번째 문자가 공백이고 다음문자가 없을때
		printf("0");
		return 0;
	}
	else if(input[0] != ' ' && input[1] == '\0') { // 첫번째 문자가 공백이 아니고 다음문자가 없을때
		printf("1");
		return 0;
	}
	for (int i = 1; i < len; i++) {  //첫번째 문자가 공백이거나 문자일경우는 위에서 처리했으므로 1번째부터 시작
		if (input[i] == ' ' && input[i+1] != '\0' && input[i+1] != ' ') {  // 공백이 나오고 다음문자가 존재하고 다음문제가 공백이 아닐 시 단어수 추가
			count++;
		}
	}
	
	printf("%d", count + 1);
	return 0;
}