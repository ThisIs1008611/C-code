#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

int main()
{
	{
	    printf("The first code\n");//这次是sizeof的使用，这里的a，b，c这三个其实去掉换入int，double和char也是可以的，也是能显示出正确的占用字节数的。	
	    int a = 10;
	    double b;
	    char c;
	    printf("%d,%d,%d,%d\n\n\n\n", sizeof(a), sizeof(b), sizeof(short), sizeof(c));
	}

	{
	    printf("The second code\n");//这次是字符串常量的转义字符的使用。
	    printf("123\t456\nabc\n");
	    printf("123\'45\n");
	    printf("uvwx\"yz\n\n\n\n\n");
	}

	{ 
		printf("The third code\n");//这个是上课的小题，但是因为粗心大意而答错了，于是写在这里。
		int a = 'c' + 2;//在这里，我想错了‘c’的意义，也没有理解%c的输出方式。
		printf("%c\n",a);//以现在来看，'c'为99，+2后为101，为'e'。
	}
}