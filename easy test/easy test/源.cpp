#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

int main()
{
	{
		printf("The first code\n");//第一个我想简单的打一个基本代码，及hello world
		printf("hello world\n\n\n\n\n");

	}

	{
		printf("The seacond code\n");//第二个我带入了简单的计算
		int a, b;
		a = 4; b = 2;
		printf("I have %d dollars\n", a);
		printf("each book is %d dollars\n", b);
		printf("I can buy %d books\n\n\n\n\n", a / b);

	}

	{
		printf("The third code\n");//第三个带入了scanf，可以以输入的数字进行简单计算,另外我还加入了if进行简单的判断,当然仅限于尝试
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
