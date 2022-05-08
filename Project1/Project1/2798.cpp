# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main(void) {
	int card_num, num, sum = 0, temp = 0;
	scanf("%d %d", &card_num, &num);
	int* card = (int*)malloc(sizeof(int) * card_num);  // 메모리 절약을 위한 동적할당
	for (int i = 0; i < card_num; i++) {
		scanf("%d", &card[i]);
	}

	//브루트 포스 알고리즘 문제로 앞에서부터 3개씩 모든 합들을 전부 비교해봄

	for (int i = 0; i < card_num - 2; i++) { // 범위를 넘어서지 않기 위해 card_num - 2
		for (int j = i + 1; j < card_num - 1; j++) { // card_num - 1
			for (int k = j + 1; k < card_num; k++) { // card_num의 끝까지
				sum = card[i] + card[j] + card[k]; // 다 더해보고
				if (sum <= num && temp < sum) { // 합이 목표보다 작거나 같으면서 구했던 합들중에 가장크면
					temp = sum; // 그 합이 결과값
				}
				sum = 0;
			}
		}
	}
	printf("%d\n", temp);

	return 0;
}	