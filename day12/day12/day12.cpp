#include <iostream>
using namespace std;
int main()
{
	{
		cout << "The first code" << endl;
	//斐波那契数列.数列的第-一个和第二个数都为1，接下来每个数都等于前面2个数之和。给出一一个正整数k，要求菲波那契数列中第k个数是多少。
	//1<=k<=46
	    int a1=1, a2=1;
	    int k,sum=0;
	    cin >> k;//如果说k等于1或2该怎么办
		if (k == 1 || k == 2)
			cout << "1" << endl << endl << endl;
		else
		{
			for (int i = 1; i <= k - 2; i++)
			{
				sum = a1 + a2;
				a1 = a2;
				a2 = sum;
			}
			cout << sum << endl << endl << endl;
		}
	}

	{
		cout << "The second code" << endl;
		//给定正整数n，求不大于n的正整数的阶乘的和。
		int n;
		cin >> n;
		int sum = 0;
		if (n <= 0)
			cout << "Error" << endl << endl << endl;
		else
		{
			for (int i = 1; i <= n; i++)
			{
				int Q = 1;
				for (int j = 1; j <= i; j++)
					Q *= j;
				sum += Q;
			}
			cout << sum << endl << endl << endl;
		}
	}

	{
		cout << "The third code" << endl;
		//给定正整数n，求不大于n的正整数的阶乘的和的第二种算法。
		int n;
		cin >> n;
		int Q = 1, sum = 0;
		if (n <= 0)
			cout << "Error" << endl << endl << endl;
		else
		{
			for (int i = 1; i <= n; i++)
			{
				Q *= i;
				sum += Q;
			}
			cout << sum << endl << endl << endl;
		}
	}

    {
		cout << "The fourth code" << endl;
		//输入若干个整数(可正可负，不超过int的表示范围），输出最大值
		//这道题的难点在于max的取值，可正可负就表明它必须要很小。
		int a;
		int max;
		cin >> max;//但是，如果我们让输入的第一个数为初始最大呢？如果它真的最大，那么直接输出，如果小的话就进入正常代码运算了。
		while (cin >> a)
		{
			if (a > max)max = a;
		}
		cout << max << endl << endl << endl;
	}

}
