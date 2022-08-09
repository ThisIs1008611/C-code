#include <iostream>
using namespace std;
int main()
{
	{
		cout << "The first code" << endl;//这个代码是为了理解while语句使用的，我没想到是一个数值一个数值来判定的。
		//输入最少一个数并且数值不超过100的数，输出最大值，最小值和所有数之和，输入的最后一个数是0，标志着输入结束。
		int n, sum = 0;
		int max = 0, min = 200;
		cin >> n;
		while (n)//因为输入0就等于while语句为假，所以就直接输出了。
		{
			if (n > max)max = n;
			if (n < min)min = n;
			sum += n;
			cin >> n;
		}
		cout << max << " " << min << " " << sum << endl << endl << endl;
	}
	double EPS = 0.001;
	{
		cout << "The second code" << endl;
		//用牛顿迭代公式法求输入数的平方根。公式Xn+1=（Xn+a/Xn）/2。
		int a;
		cin >> a;
		if (a >= 0)
		{
			double x = a / 2, lastX = x + 1 + EPS;
			while (x - lastX > EPS || lastX - x > EPS)
			{
				lastX = x;
				x = (x + a / x) / 2;
			}
			cout << x << endl << endl << endl;


		}
		else
			cout << "Error" << endl << endl << endl << endl;
		//说实话，这个代码我感觉有点绕。
	}

	{
		cout << "The third code" << endl;//理解do...while语句。一般来说要让语句最少执行一次，就使用它。
		int i=0;
		do 
		{
			i++;
		} while (i > 2);
			cout << i;//输出的是1，因为语句是先运行一遍再看是否符合条件，所以当i=1时，没有满足条件，直接输出。
	}
}
