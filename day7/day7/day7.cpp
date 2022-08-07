#include <iostream>
using namespace std;

int main()
{
	{
		cout << "The first code" << endl;//这个代码是开始学习if else语句的，顺便把printf换掉，用cout。
		int a;
		cin >> a;
		if (a > 0)
			if (a % 2 == 1)
				cout << "奇数！" << endl << endl << endl << endl;
			else
				cout << "偶数！" << endl << endl << endl << endl;

	}

	{
		cout << "The second code" << endl;//运用if elseif
		//输入一个年份，根据年份判断是否是建国十周年，建党十周年和是否是闰年，并给出不同的输出。
		int a;
		cin >> a;
		if (a < 0)
			cout << "年份错误" << endl;
		if (a > 0)
			if (a > 1949 && (a - 1949) % 10 == 0)
				cout << "是建国十周年" << endl << endl << endl << endl;
			else if (a > 1921 && (a - 1921) % 10 == 0)
				cout << "是建党十周年" << endl << endl << endl << endl;
			else if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
				cout << "是闰年" << endl << endl << endl << endl;
	}

	{
		cout << "The third code" << endl;
		//一个程序，接受一个整数作为输入，如果输入1，则输出“Monday”，输入2，则输出“Tuesday”……输入7,则输出“Sunday”，输入其他数，"则输出“lllegal”。
		int day;
		cin >> day;
		switch (day)
		{
		case 1:printf("monday\n\n\n\n"); break;
		case 2:printf("tuesday\n\n\n\n"); break;
		case 3:printf("wendnesday\n\n\n\n"); break;
		case 4:printf("tsday\n\n\n\n"); break;
		case 5:printf("friday\n\n\n\n"); break;
		case 6:printf("satursday\n\n\n\n"); break;
		case 7:printf("sunday\n\n\n\n"); break;
		default:printf("lllegal"); break;
		}


	}

	{
		cout << "The fourth code" << endl;//今天先浅浅的了解一下for语句的使用
		int i;
		for (i = 0; i < 26 ; ++i)
		{
			cout << char('a' + i);



		}



	}
}