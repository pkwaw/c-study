#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, result = 0;
	scanf("%d", &a);
	while (1) {
		if (a % 5 == 0) { // 입력한 수가 5의배수이면 그대로 종료
			break;
		}
		if (a < 0) { // 값이 음수가 되면 완전히 딱 나누지 못하므로 -1 출력
			result = -1;
			break;
		}
		a = a - 3;  // 5의 배수가 아니므로 3씩 빼고 가방갯수 1개씩 올려주면됨
		result++;
	}
	if (result >= 0) { // -1인경우 나누지못하는 경우고 나머지는 나눠진 경우임
		result += a / 5; // 3의배수 케이스는 위에서 해결했으니까 5의배수인 케이스로 가방 갯수 출력
	}
	printf("%d", result);
	return 0;
}