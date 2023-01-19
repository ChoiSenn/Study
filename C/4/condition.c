#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));

	int num = rand() % 100 + 1;
	printf("정답 : %d\n\n", num);

	int answer = 0;
	int chance = 5;

	while(1) {
		printf("남은 횟수는 %d번입니다.\n", chance);

		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓");
		}
		else if (answer < num) {
			printf("UP ↑");
		}
		else if(answer == num) {
			printf("정답입니다!!");
			break;
		}
		else {
			printf("오?류");
		}

		printf("\n");
		chance--;

		if (chance <= 0) {
			printf("실패...");
			break;
		}
	}
	
	return 0;
}