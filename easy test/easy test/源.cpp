#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

int main()
{
	{
		printf("The first code\n");//��һ������򵥵Ĵ�һ���������룬��hello world
		printf("hello world\n\n\n\n\n");

	}

	{
		printf("The seacond code\n");//�ڶ����Ҵ����˼򵥵ļ���
		int a, b;
		a = 4; b = 2;
		printf("I have %d dollars\n", a);
		printf("each book is %d dollars\n", b);
		printf("I can buy %d books\n\n\n\n\n", a / b);

	}

	{
		printf("The third code\n");//������������scanf����������������ֽ��м򵥼���,�����һ�������if���м򵥵��ж�,��Ȼ�����ڳ���
		int m;
		printf("Hello,welcome to cake shop,each cake is 6 dollars,how much you have?\n");
		scanf("%d", &m);
		if (m > 100)
		{
			printf("WoW,that's lot of money.Can you really take so many cakes?\n");
		}
		printf("Here is %d cakes,charge %d dollars,take it please.\n", m / 6, m % 6);

		return 0;
	}
}
