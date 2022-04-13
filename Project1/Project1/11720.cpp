#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) { // 처음에 int형으로 받아서 for문 안에서 처리했는데 해보니까 입력을 띄워서 받을 수 없고 사이즈가 커서 문자열 사용
	int input, sum = 0;
	scanf("%d", &input);
	char arr[101];
	scanf("%s", arr);
	for (int i = 0; i < input; i++) {
		sum += arr[i] - 48; // 문자열로 받은 값이기에 아스키코드 48 만큼 값을 빼줘야함
	}
	printf("%d", sum);
	return 0;
}