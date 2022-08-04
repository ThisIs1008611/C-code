#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	{
		printf("The first code\n");//这个代码是来理解运算关系的，在代码中正确就是1，错误就是0。
		int a1 = 4, a2 = 5, a3;
		a3 = (a1 > a2);
		cout << a3 << ",";
		a3 = (a1 < a2);
		cout << a3 << ",";
		a3 = (a1 == 4);//这里的==是等于，而=是赋值
		cout << a3 << ",";
		a3 = (a1 != 4);//这里的！=是不等于
		cout << a3 << ",";
		a3 = (a1 == 5);
		cout << a3 << endl << endl << endl << endl;
	}

	{
		printf("The second code\n");//这个代码是用来理解运算步骤的，或与非三个中，有些是可以不计算的
		int a = 0, b = 1;
		bool n = (a++) && (b++);//b++不被计算（因为括号内前一个计算后，后面就没有计算的必要了）
		cout << a << "," << b << endl;//于是输出1，1
		n = a++ && b++;//都要计算（这个正常）
		cout << a << "," << b << endl;//于是输出2，2
		n = a++ || b++;//b++不被计算（这个也一样，只要输出一个即可，那么第一个已经输出，所以b++不输出）
		cout << a << "," << b << endl << endl << endl << endl;//于是输出3，2

	}

	{
		printf("The third code\n");//此代码是用来理解强制转换的。
		double f = 9.14;
		int n = (int)f;//把浮点型强制转换为整型。
		cout << f << ",";
		f = n / 2;//已经换为整型了，那么得出来的数肯定是除不完整的。
		cout << f << ",";
		f = double(n) / 2;//把数再强制转换为浮点型，即可除完
		cout << f ;

	}
}
