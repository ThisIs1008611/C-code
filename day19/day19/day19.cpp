#include <iostream>
using namespace std;
//今天来学习函数。

int max(int x, int y)//现在就已经定义了一个叫做max的函数了。再一说，（int x，int y）是属于形参
{
	if (x > y)//意思为求两个数中最大的数
		return x;//如果x大，那么返回值就是x。
	return y;//反过来就是y了。
}

bool sushu(unsigned int n)//unsigned是非负数的意思。
{
	if (n <= 1)//1和0不可能是素数嘛。
		return false;//于是输出0嘛
	for (int i = 2; i < n; i++)//让i小于n的话就可以使2无需进入判断。
		if (n % i == 0)//注意，i是会增加的，保证不会被遗漏。
			return false;
	return true;
}

#define EPS 0.001
double sqrt(double a)//求a的平方根
{
	double x = a / 2, lastx = x + 1 + EPS;//保证最少一次循环。
	while (x - lastx > EPS || lastx - x > EPS)
	{
		lastx = x;
		x = (a + x / a) / 2.0;
	}
	return x;
}
double juli(double x1,double y1,double x2,double y2)
{//求两点的距离。
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));//这个属于函数的声明。
}

int main()//然后开始写主代码，函数确实好用，终于不用把代码挤在一个函数里了。

                /*这是距上次写出上面那个注释过去了一个小时，我是傻逼。*/
{
	{      /*求两个数中最大的数*/

		cout << "The first code" << endl;
		int n = max(4, 6);//再一说，这里的max（4，6）和max（20，n）是属于实参，因为有准确的数字。
		//既然6比4大，那么n就等于了6，不需要再写什么对数字的判断，因为max函数已经把这活干了。
		cout << n << " " << max(20, n) << endl << endl << endl;//那么就直接输入即可，然后就又出来了一个max（20，n），因为20比6大，所以返回值为20，于是就输出20了。

		//函数的主要意思就是减小你的代码复杂度，如果说每个代码都是写成max函数里的公式，那么，代码计算错误该怎么办，一个一个的去检查吗？太费时间了。
		//所以就把需要用到很多次的代码放进一个函数中，然后调用函数即可，这样如果说计算公式错误，也可以很方便的进行改正。
	}

	{
		cout << "The second code" << endl;
		         /*判断是否是素数*/
		cout << sushu(2) << " " << sushu(4) << " " << sushu(5);//公式都在sushu函数完成了，那么直接写即可。
		cout << endl << endl << endl;
	}

	{
		cout << "The third code" << endl;
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		cout << juli(x1, y1, x2, y2) << endl;//把每条线的距离都输出。
		cout << juli(x1, y1, x3, y3) << endl;//并且函数里的x1什么的只是初始定义。
		cout << juli(x3, y3, x2, y2) << endl;//所以，只要把内部数字一带入，就可以输出了。
	}
}



