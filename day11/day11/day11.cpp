#include <iostream>
using namespace std;
int main()
{
	{//这个代码是用来理解break语句的，它用来跳出它所在的那一个循环，以此来简化代码，保证一些不必要的运算浪费。
		cout << "The first code" << endl;
		int a=0;
		while (true)
		{
			if (a > 100)
				break;
			a++;
		}
		cout << a << endl << endl << endl;
	}

	{//例题:如果两个不同的正整数，他们的和是他们的积的因子，就称这两个数为兄弟数，小的称为弟数，大的称为兄数。
	 //先后输入正整数n和m(n < m) ,请在n至m这m-n+1个数中，找出一对兄弟数。如果找不到，就输出“No Solution.”。
	 //如果能找到，就找出和最小的那一对;如果有多对兄弟数和相同且都是最小，就找出弟数最小的那一对。
		cout << "The second code" << endl;
		int n, m;
		int i, j;
		cin >> n >> m;//输入范围。
		int a = m + 1, b = m + 1;//初始化兄弟数。
		for (i = n; a < m; i++)//取弟数，一共有m-n个取法。
			if (i > (a + b) / 2 + 1)//如果说i的值已经大于两个相加的一半，那么肯定就没有兄数了，毕竟兄数要大于弟数。
				break;	//所以直接打破循环。
		for (j = i + 1; j <= m; j++)//取兄数，一共有m-n-1个取法，因为要大于弟数。
		{
			if (i + j > a + b)//我们要取的是最小兄弟数，所以已经不需要更大的了。
				break;//所以打破循环，弟数+1。
			if (i * j % (i + j) == 0)//找到了兄弟数。
			{
				if (i + j < a + b)//并且还比之前找到的还小。
				{
					a = i; b = j;//于是赋值，再进入下一个循环，看有没有更小的。
				}
			}
			else if (i + j == a + b && i < a)//如果找不到了，但发现他们相等并且弟数比之前还小。
				a = i; b = j;//赋值。

		}
		if (a == m + 1)//如果没找到怎么办。
			cout << "No Solution." << endl << endl << endl;//直接说没找到。
		else
			cout << a << "," << b << endl << endl << endl;//除此之外，输出你找到的兄弟数。
	}

	{//这个代码是用来理解continue语句的
		cout << "The third code" << endl;
		for (int i = 1; i <= 10; i++)
		{
			if (i % 2 != 0)
				continue;//continue起到的是立即结束本循环，进行下一次循环。
			cout << i << ",";//所以输出的是2，4，6，8，10.
		}

		cout << endl << endl << endl;
	}

	{cout << "The fourth code" << endl;
		int x, y;
		while (cin >> x >> y/*这里也可以写作 scanf("%d%d", &x, &y) != EOF */   /*在或，可以写为scanf("%d%d", &x, &y) == 2*/)//在这里，EOF的值为-1。
			                               //这里的scanf是OJ输入处理，处理的是正确输入了几个数值。
			printf("%d",x+y);//如果说你输入了两个数，那么就一直进行计算。
		//如果你不想输入了怎么办，就执行CTRL+Z，即告诉代码已经输入完毕
	}
	//傻逼vs，不让scanf输出，我也懒得加预处理了。
	{cout << "The fifth code" << endl;
	//输入若干个(不知道多少个)正整数，输出其中的最大值。
	int q; int max = 0;
	while (cin >> q)//或者可以写成scanf("%d", &q) ==1又或者可以写成scanf("%d", &q) != EOF
	{
		if (q > max) max = q;
	}
	printf("%d", max);
	}

}
