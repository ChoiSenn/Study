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
			printf("\n\n�����ϰڽ��ϴ�.");
			exit(0);
		}
		else if (answer == n1 * n2) {
			printf("�����Դϴ�!");
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n���� ���� ...    ��й�ȣ %d���� ������ϴ�!", count);

	return 0;
}

int getRandomNumber(int level) {
	return(rand() % (9 * level) + 1);
}

void showQuestion(int level, int n1, int n2) {
	printf("\n\n--------- %d��° ��й�ȣ ----------", level);
	printf("\n%d x %d = ?", n1, n2);
	printf("\n\n��й�ȣ�� �Է��ϼ��� : >> ");
}

void fail() {
	printf("\n\nƲ�Ƚ��ϴ�!!");
}