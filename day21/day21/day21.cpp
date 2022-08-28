#include <iostream>
using namespace std;
int F(int n)
{	//求函数n的返回乘阶
	//这节课所学的是递归，这个代码也是自己调用自己。
	if (n < 2)//如果说n小于2的话才会停止运行。
		return 1;
	else//要不然会一直运行下去。
		return n * F(n - 1);//如果实参为5，那么就是5*F（4），即5*4*F（3），即5*4*3*F（2），即5*4*3*2*F（1），即5*4*3*2*1.
	//自此，乘阶就求出来了。
}

int FB(int n)
{
	if (n == 1 || n == 2)//如果n等于1或2
		return 1;//那么他们的值将直接等于1（毕竟数列里第一和第二项就是1）
	else
		return FB(n - 1) + FB(n - 2);//所以在n等于3的时候值就为2，着也符合数列。
}
/*以上，数列计算公式构建完毕。自己引用自己的数列也就叫递归了。*/
/*以下，为库函数和头文件*/

//库函数。
#include <cmath>//库函数cmath包含了许多的数学库函数算式，那么我们可以用它来算一些算式。注，必须要有这个库函数才能使用函数算式。
//并且，库函数也不是用来定义算式的，算是一种引用算式的样子，即在公式中挑出一个所需要的算式并把值代入的感觉。
/*在这里就再标明一些cmath的公式*/
//int abs(int x) 求整型数x的绝对值。   double cos(double x) 求x(弧度)的余弦。   double fabs(double x) 求浮点数x的绝对值。
//int ceil(double x) 求不小于x的最小整数。   double sin(double x) 求x(弧度)的正弦。   double sqrt(double x) 求x的平方根。

//头文件
//头文件就是库函数中<>里的英文，即刚刚的cmath，iostream，string啊，像C语言里的stdio.h也是。

int main()
{
	{
		//求函数n的返回乘阶
		cout << "The first code" << endl;
		cout << F(5) << endl << endl;
	}

	{
		//求斐波那契数列第n项
		cout << "The second code" << endl;
		cout << FB(5) << endl << endl;
	}

	{
		//用头文件包含的公式来求平方根。
		cout << "The third code" << endl;
		double a;
		cin >> a;
		if (a < 0)
		{
			cout << "Error" << endl;
			return 0;
		}
		cout << sqrt(a) << endl << endl;//在这个代码中，我没有写任何的公式，现在输出4，看能否输出2.
		//看样子成功了，库函数并不是没什么用的。
	}


}
