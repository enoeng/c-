#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	if (a > 100 || a < 0)
	{
		printf("error");
	}
	else
	{
		if (a >= 90)
		{
			printf("����� ������ A �Դϴ�");
		}
		else if (a >= 80 && a < 90)
		{
			printf("����� ������ B �Դϴ�");
		}
		else if (a >= 70 && a < 80)
		{
			printf("����� ������ C �Դϴ�");
		}
		else if (a >= 60 && a < 70)
		{
			printf("����� ������ D �Դϴ�");
		}
		else
		{
			printf("����! ����� ������ F �Դϴ�");
		}
	}
}