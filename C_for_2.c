#include <stdio.h>

int main(void)
{
	int a[3], i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���� �� ���� �Է��Ͻÿ�. : ");
		scanf_s("%d", &a[i]);
	}

	printf("�Է��Ͻ� ������ ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	printf("�Դϴ�.\n");

	return 0;
}