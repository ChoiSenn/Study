#include <stdio.h>

int main(void) {
	int floor;
	printf("�� ������ �װڽ��ϱ�? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {  // �� �� ��
		for (int j = 1; j <= floor - i + 1; j++) {  // ù ����
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}