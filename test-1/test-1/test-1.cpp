#include <stdio.h>
int main()
{
	{
		printf("The first code\n");//这个代码要解决输入和输出的基本概念
		int a; float b; char c;
		scanf("%d%c%f",&a,&c,&b);//在输入字符时是不需要空格的，因为空格也算一个字符
		printf("%05d,%c,%.6f\n\n\n\n\n",a,c,b);
	}

	{
		printf("The srcond code\n");//这个代码是理解输出结果的
		int a = 10, b = 3;
		double c = a / b;
		printf("sum=%f\n",c);//如果把a和b定义为浮点型，答案就为3.33333
		int d = 5 / 2;
		printf("sum=%d\n",d);
		double e = 5 / 2.0;
		printf("sum=%f\n\n\n\n\n",e);
	}
	{
		printf("The third code\n");//这个代码是简单的描述一下符号的功能
		int a = 3, b = 4;
		if (a > b)
			printf("false\n");
		if(a==b)
			printf("false\n");
		if(a!=b)
			printf("a!=b is true\n");
		if(a<b)
			printf("a<b is true\n");
	}
}