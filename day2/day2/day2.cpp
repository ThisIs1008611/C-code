#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

int main()
{
	{
	    printf("The first code\n");//�����sizeof��ʹ�ã������a��b��c��������ʵȥ������int��double��charҲ�ǿ��Եģ�Ҳ������ʾ����ȷ��ռ���ֽ����ġ�	
	    int a = 10;
	    double b;
	    char c;
	    printf("%d,%d,%d,%d\n\n\n\n", sizeof(a), sizeof(b), sizeof(short), sizeof(c));
	}

	{
	    printf("The second code\n");//������ַ���������ת���ַ���ʹ�á�
	    printf("123\t456\nabc\n");
	    printf("123\'45\n");
	    printf("uvwx\"yz\n\n\n\n\n");
	}

	{ 
		printf("The third code\n");//������Ͽε�С�⣬������Ϊ���Ĵ��������ˣ�����д�����
		int a = 'c' + 2;//�����������ˡ�c�������壬Ҳû�����%c�������ʽ��
		printf("%c\n",a);//������������'c'Ϊ99��+2��Ϊ101��Ϊ'e'��
	}
}