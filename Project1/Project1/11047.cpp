#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {
	int input, money, result = 0;
	scanf("%d %d", &input, &money);
	int* inMoney = (int*)malloc(sizeof(int) * input); // 비쥬얼스튜디오상 int inMoney[input] 작동 안해서 동적할당 사용
	for (int i = input - 1; i >= 0; i--) { // 내림차순으로 입력받아서 아래 for문에서는 오름차순으로 작동 가능
		scanf("%d", &inMoney[i]);
	}
	for (int i = 0; i < input; i++) {
		result += money / inMoney[i]; // 큰금액부터 나누기 시작해서 동전 갯수 늘려감
		money %= inMoney[i]; // 나눴으면 나눈 나머지로 금액 수정
		if (inMoney[i] == inMoney[input]) { // 금액이 최소금액의 배수가 되면 그 갯수만큼 동전 갯수 늘리고 끝
			result += money / inMoney[i];
		}
	}
	printf("%d", result);
	return 0;
}
