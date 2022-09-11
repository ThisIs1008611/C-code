#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)

void rush(const char h1[],const char h2[])//这个代码的意思是输出两个函数中最小的那一个。
{
	if (strcmp(h1, h2) <= 0)//就用strcmp来整了。
		cout << h1;
	else
		cout << h2;
}

int main()
{
	{
		char h1[30]; char h2[40]; char h3[100];
		strcpy(h1, "Hello");//把Hello拷贝进h1里

		strcpy(h2, h1);//把h1的东西拷贝到h2里

		cout << "1) " << h2 << endl;//于是h2就成了Hello

		strcat(h1, ",World");//strcat的用处就是在目标函数的后面再加入一段，（用的存储地也是目标函数的）

		cout << "2) " << h1 << endl;//于是h1就成为了Hello，World

		cout << "3) "; rush("abc", h2); cout << endl;//这个函数就调用上面的算式函数了，它是根据ASCII码来决定谁打谁小的，因为大写的字母比小写的ASCII码小，所以输出Hello

		cout << "4) "; rush("abc", "aaa"); cout << endl;//并且，对比大小的也是一个一个字母来对比的，只要第一个字母大或小，那么就输出它。

		int n = strlen(h2);//strlen的用处是输出函数的大小，它输出的目标是h2，即Hello，那就是5了。

		cout << "5) " << n << "," << strlen("abc") << endl;//那abc也就是3咯。

		strupr(h1);//strupr的用处是把目标函数的字母全转换为大写

		cout << "6) " << h1 << endl;
	}
	//除此自外还有strlwr（char[]），它的用处就是把目标函数的字母全改为小写。

	 
}


/*
接下来就是一些字符串的糟糕用法，也算是例题了
char a[100]="test";
for(int i=0;i<strlen(s);i++)
s[i]=s[i]+1;
*/
//虽然说这个函数是对的，但是它每次在定义的时候都要执行一波strlen，这样很费时间，也浪费内存，于是有了两个改进版。
/*
char a[100]="test";
int s=strlen(s);
for(int i=0;i<s;i++)
s[i]=s[i]+1;
*/
//这样就把s的长度化为了一个已知的数字，这样就不会再浪费时间与效率了。
//还有第二种方法
/*
char a[100]="test";
for(int i=0;a[i];i++)
s[i]=s[i]+1;
*/
//不愧是C++，不管学的什么都是有用的，真的。
//首先就是非常早接触到的1=True，0=False。只要a[i]不等于0，那么这个循环就会一直下去，那么又该怎么停下呢。
//这就来到了上一节课，每个输入字符串时后面都会加一个‘/0’，它的意思也是ASCII码的0，这不就完事了，到了0就停下了。