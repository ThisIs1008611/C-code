#include <iostream>
using namespace std;
int main()
{
	{
		//给定一个整数，判断该数是奇数还是偶数。输出仅一行，如果n是奇数，输出odd；如果n是偶数，输出even。(n>0)
        int a;
        cin >> a;
        if (a % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
	}

	{//利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)求一元二次方程ax2+ bx + c =0的根，其中a不等于0。
     //输出一行，表示方程的解。若b2 = 4 * a * c,则两个实根相等，则输出形式为：x1=x2=...。若b2 > 4 * a * c,则两个实根不等，则输出形式为：x1=...;x2 = ...，其中x1>x2。
	 //若b2 < 4 * a * c，则有两个虚根，则输出：x1=实部+虚部i; x2=实部-虚部i，即x1的虚部系数大于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
	 //所有实数部分要求精确到小数点后5位，数字、符号之间没有空格。
		double a, b, c, d, e;
		cin >> a >> b >> c;
		double x1 = 0, x2 = 0;
		if (b * b - 4 * a * c == 0)
		{
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("x1=x2=%.5f\n", x1);
		}
		else if (b * b - 4 * a * c > 0)
		{
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			if (x1 > x2)
				printf("x1=%.5f;x2=%.5f\n", x1, x2);
			else
				printf("x1=%.5f;x2=%.5f\n", x2, x1);
		}
		else if (b * b - 4 * a * c < 0)
		{
			d = 0 - b / (2 * a);
			e = sqrt(4 * a * c - b * b) / (2 * a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", d, e, d, e);
		}
	}

	{//有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），x是横轴，y是纵轴。写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）。
	 //输出一行，包括两个整数x、y，以一个空格分开，表示坐标(x,y)。如果点在正方形内，则输出yes，否则输出no。
		int a, b;
		cin >> a >> b;
		if (a <= 1 && a >= -1)
		{
			if (b <= 1 && b >= -1)
			{
				cout << "yes" << endl;
			}
			else
				cout << "no" << endl;
		}
		else
			cout << "no" << endl;
	}

	{//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
	 //输入仅一行，包括n，x和y（均为整数）。输出也仅一行，剩下的苹果个数.
		int n, x, y;
		cin >> n >> x >> y;
		double i = n - 1.0 / x * y;
		if (i <= 0)
			cout << "0" << endl;
		if (i > 0)
			if (i > (int)i)
				cout << (int)i << endl;
			else if (i == i)
				cout << i << endl;
	}

	{//一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。
	 //输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。
	 //输出只有一行，一个整数，为运算结果。然而：1. 如果出现除数为0的情况，则输出：Divided by zero!2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
		int a, b;
		char c;
		double d = 0;
		cin >> a >> b >> c;
		switch (c)
		{
		case '+':d = a + b; break;
		case '-':d = a - b; break;
		case '*':d = a * b; break;
		case '/':
			if (b == 0)
			{
				cout << "Divided by zero!" << endl;
			}
			else
			{
				d = a / b; break;
			}
		default:cout << "Invalid operator!" << endl;
		}
		cout << d << endl;
	}

	{//读入n（1 <= n <= 10000）个整数，求它们的和与均值。
	 //输入第一行是一个整数n，表示有n个整数。第2~n+1行每行包含1个整数。每个整数的绝对值均不超过10000。
	 //输出一行，先输出和，再输出平均值（保留到小数点后5位），两个数间用单个空格分隔。
		int a, n, sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			sum += a;
		}
		double e = (double)sum / n;
		printf("%d %.5f", sum, e);
	}

	{//给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。
	 //一共2行，第一行为序列的个数n（1 <= n <= 1000)，第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。
	 //输出一行，表示序列的最大跨度值。
		int n, x;
		cin >> n;
		int  a, max = 0, min = 2000;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			if (max < a) max = a;
			if (min > a) min = a;
		}
		x = max - min;
		cout << x << endl;
	}

	{//2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
	 //输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。
	 //输出1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。
		int n, a, b, c, A = 0, B = 0, C = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b >> c;
			A += a;
			B += b;
			C += c;
		}
		cout << A << " " << B << " " << C << " " << A + B + C << endl;
	}

	{//给出一个整数a和一个正整数n，求乘方an。
	 //一行，包含两个整数a和n。-1000000 <= a <= 1000000，1 <= n <= 10000。
	 //一个整数，即乘方结果。题目保证最终结果的绝对值不超过1000000。
		int a, n, sum = 1;
		cin >> a >> n;
		for (int i = 0; i < n; i++)
		{
			sum = sum * a;
		}
		cout << sum;
	}

	{//鸡尾酒疗法，原指“高效抗逆转录病毒治疗”（HAART）.假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，如果y-x大于5%，则效果更好，如果x-y大于5%，则效果更差，否则称为效果差不多。
	 //下面给 出n组临床对照实验，其中第一组采用鸡尾酒疗法，其他n-1组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。
	 //第一行为整数n（ 1 < n <= 20）；其余n行每行两个整数，第一个整数是临床实验的总病例数(小于等于10000)，第二个疗效有效的病例数。
	 //这n行数据中，第一行为鸡尾酒疗法的数据，其余各行为各种改进疗法的数据。
	 //有n-1行输出，分别表示对应改进疗法的效果：如果效果更好，输出better；如果效果更差，输出worse；否则输出same
		int n;
		double g, j, a, b, x, y;
		cin >> n;
		cin >> a >> b;
		x = b / a;
		for (int i = 1; i < n; i++)
		{
			cin >> g >> j;
			x = b / a;
			y = j / g;
			if (y - x > 0.05)cout << "better" << endl;
			else if (x - y > 0.05)cout << "worse" << endl;
			else cout << "same" << endl;
		}
	}


}