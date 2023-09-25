#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;

	printf("점수를 입력하세요 : ");
	scanf("%d", &a);
	if (a > 100 || a < 0)
	{
		printf("error");
	}
	else
	{
		if (a >= 90)
		{
			printf("당신의 성적은 A 입니다");
		}
		else if (a >= 80 && a < 90)
		{
			printf("당신의 성적은 B 입니다");
		}
		else if (a >= 70 && a < 80)
		{
			printf("당신의 성적은 C 입니다");
		}
		else if (a >= 60 && a < 70)
		{
			printf("당신의 성적은 D 입니다");
		}
		else
		{
			printf("저런! 당신의 성적은 F 입니다");
		}
	}
}