#include <iostream>
using namespace std;
int main()
{

	{
	    printf("The first code\n");//这个代码是初次尝试c++的cout代码，所以这个是搬运课件的代码，不是自编代码
	    int n = 5;
	    double f = 3.9;
	    char c = 'a';
	    cout << "n=" << n << ",f=" << f << endl;//cout为输出，<<表现为把东西给cout输出
		cout << 123 << ",c=" << c << endl << endl << endl << endl;
	}

	{
		printf("The second code\n");//第二个代码是cin的，>>为要输出的东西
		int n1,n2;
		double f;
		char c;
		cin >> n1 >> n2 >> c >> f;//在这里，输入字符时可以有空格，他会跳过
		cout << n1 << "," << n2 << "," << c << "," << f << endl << endl << endl << endl;
	}

	{
		printf("The third code\n");//自增运算符的位置会影响到值的大小
		int a1, a2 = 5;
		a2++;
		cout << a2 << endl;
		++a2;
		cout << a2 << endl;
		a1 = a2++;
		cout << a1 << "," << a2 << endl;
		a1 = ++a2;
		cout << a1 << "," << a2 << endl;

	}

}