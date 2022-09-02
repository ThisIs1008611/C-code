#include <iostream>
using namespace std;
//第二题的定义。
int h[1000000], x[100000];
int main()
{
	{//给定两个正整数，求它们的最大公约数。
	 //输入一行，包含两个正整数(<1,000,000,000)。输出一个正整数，即这两个正整数的最大公约数。
		int a, b, c, x;
		cin >> a >> b;
		if (b > a)
		{
			c = b;
			b = a;
			a = c;
		}
		while (1)
		{
			x = a % b;
			if (x != 0)
			{
				a = b;
				b = x;
			}
			else
				break;
		}
		cout << b;
	}

	{//Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。给出一个正整数k，要求Pell数列的第k项模上32767是多少。
	 //第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。输出n行，每行输出对应一个输入。输出应是一个非负整数。
		int n, k;
		cin >> n;
		for (int z = 1; z <= n; z++)
		{
			cin >> k;
			h[1] = 1;
			h[2] = 2;
			for (int i = 3; i <= k; i++)
			{
				h[i] = h[i - 1] * 2 + h[i - 2];
				h[i] %= 32767;
			}
			x[z] = h[k];
		}
		for (int i = 1; i <= n; i++)
		{
			cout << x[i] << endl;
		}
	}


}