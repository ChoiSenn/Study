#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));

	int num = rand() % 100 + 1;
	printf("���� : %d\n\n", num);

	int answer = 0;
	int chance = 5;

	while(1) {
		printf("���� Ƚ���� %d���Դϴ�.\n", chance);

		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ��");
		}
		else if (answer < num) {
			printf("UP ��");
		}
		else if(answer == num) {
			printf("�����Դϴ�!!");
			break;
		}
		else {
			printf("��?��");
		}

		printf("\n");
		chance--;

		if (chance <= 0) {
			printf("����...");
			break;
		}
	}
	
	return 0;
}