#include <stdio.h>

int main(void)
{
	int a[3], i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("정수 한 개를 입력하시오. : ");
		scanf_s("%d", &a[i]);
	}

	printf("입력하신 정수는 ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	printf("입니다.\n");

	return 0;
}