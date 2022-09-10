#include <iostream>
#include <stdio.h>
using namespace std;
int bitManipulation3(int n, int i) 
{//这是题
	//写出函数中缺失的部分，使得函数返回值为一个整数,该整数的左边i位是n的左边i位取反，其余位和n相同
	//请使用【一行代码】补全bitManipulation3函数使得程序能达到上述的功能
	return (-1 << (32 - i)) ^ n;
}

int main()
{

	{
		cout << "The first code" << endl;
		char abc[100];//不仅cin可以输入字符串，scanf也是可以的
		scanf("%s",abc);//并且scanf在输入的时候，后面的目标是不需要加&的。
		printf("%s\n\n",abc);//还有，printf和cin所输出的字符串是以‘/0’停止，还以空格停止。
		//现在我输入一个X Y Z，只能输出X，但我输入X_Y_Z就没事，因为‘_’不是空格。
	}

	{
		cout << "The second code" << endl;
		char bbc[10];
		cin.getline(bbc, sizeof(bbc));//getline是一个可以读取这一行的所有字符这就包括了空格，和上面的代码相比好了不少，但是还有一个小缺陷。
		//这个缺陷就是函数后面的数字，就像我现在赋范围为10个字符，但是所能放入的有效值却是10-1=9，因为它会在最后头自动添加‘/0’.
		cout << bbc << endl << endl;
		//如果这一行已经超过了函数的范围-1，那么就止步于函数-1了。
		/*如果想正常输出，请单独拉出来*/

	}

	{//这是第一题
		cout << "The first title" << endl;
		int t, n, i;
		cin >> t;
		while (t--)
		{
			cin >> n >> i;
			cout << bitManipulation3(n, i) << endl;
		}
	}
}
 
