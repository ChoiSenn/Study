#include <stdio.h>

int main(void) {
	int floor;
	printf("몇 층으로 쌓겠습니까? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {  // 총 줄 수
		for (int j = 1; j <= floor - i + 1; j++) {  // 첫 공백
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}