#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input, temp1, temp2 = 0, count = 0, result, temp, a;
	scanf("%d", &input);
	a = input;
	while (1) {
		temp = input / 10;  
		temp1 = input % 10;  
		temp2 = (temp + temp1) % 10; 
		result = (temp1 * 10) + temp2;
		input = result;
		count++;
		if (result == a) {
			break;
		}
		
	}
	printf("%d", count);
	return 0;
}