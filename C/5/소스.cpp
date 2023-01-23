#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	int getRandomNumber(int level);
	void showQuestion(int level, int n1, int n2);
	void fail();
	
	srand(time(NULL));

	int count = 0;

	for (int i = 1; i <= 5; i++) {
		int n1 = getRandomNumber(i);
		int n2 = getRandomNumber(i);
		showQuestion(i, n1, n2);
		int answer = -1;
		scanf_s("%d", &answer);

		if (answer == -1) {
			printf("\n\n종료하겠습니다.");
			exit(0);
		}
		else if (answer == n1 * n2) {
			printf("정답입니다!");
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n게임 종료 ...    비밀번호 %d개를 맞췄습니다!", count);

	return 0;
}

int getRandomNumber(int level) {
	return(rand() % (9 * level) + 1);
}

void showQuestion(int level, int n1, int n2) {
	printf("\n\n--------- %d번째 비밀번호 ----------", level);
	printf("\n%d x %d = ?", n1, n2);
	printf("\n\n비밀번호를 입력하세요 : >> ");
}

void fail() {
	printf("\n\n틀렸습니다!!");
}