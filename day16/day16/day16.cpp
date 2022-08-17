#include <iostream>
using namespace std;
//以下为第一次代码的定义。
#include <string>//string是字符串类型，如果需要使用字符串数组的话就需要这个头文件。
string weekdays[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
//以下为第二次代码的定义。
int monthdays[] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };//月份是12个月，但这里是13个数，因为要把[0]占住。

int main()
{
	{//输入哪天就输出英文的那个switch-case语句，但这次是使用数组完成。
		cout << "The first code" << endl;
		int n;
		cin >> n;
		if (n < 1 || n>7)
			cout << "Illegal" << endl << endl << endl;
		else
			cout << weekdays[n - 1] << endl << endl << endl;//众所都周知啊，数组是从0开始赋值的。就比如说这个代码，Tuesday为weekdays[1]，但是你要输入2，所以-1即可。

	}

	{//已知2012年1月25日是星期三，编写一个程序，输入用“年月日”表示的一个2012年1月25日以后的期，输出该日期是星期几(星期天输出O)。
		cout << "The second code" << endl;
		int year, month, day;
		cin >> year >> month >> day;
		int days = 0;//这里的定义是用来存储距离输入时间过了多少天。
		for (int a = 2012; a < year; a++)
		{
			if (a % 4 == 0 || a % 100 != 0 || a % 400 == 0)//判断是否是闰年
				days += 366;//如果是就加366天。
			else
				days += 365;//不是就加365天。
		}
		if (year % 4 == 0 || year % 100 != 0 || year % 400 == 0)//闰年的话多的一天就是属于2月的，所以判断2月的天数。
			monthdays[2] = 29;//之前的定义就有了意义，可以不再需要-1。
		for (int m = 1; m < month; m++)//如果到了这里，就表明年份已经定下了，这里的m表示
			days += monthdays[m];//判断到那个月就往days里加所对应的天数。
		days += day;//把你输入的天数一并加上。
		days -= 22;//2012年1月22日为星期天，因为把2012一整年都加进去了，所以要减去开始的日期。
		cout << days % 7 << endl;//直接输出，不需要再把算式写出来再输出。
	}
}
