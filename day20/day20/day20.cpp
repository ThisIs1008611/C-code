#include <iostream>
using namespace std;
//这是第一个代码的定义
int a1[4] = { 4,15,6,9 };
int a2[] = { 3,18,56,40,78 };
int findMax(int a[], int length)
{
	int max = a[0];
	for (int i = 1; i < length; i++)
		if (max < a[i])
			max = a[i];
	return max;//等于输出max的值。
}
//这是第二个代码的定义
int a3[4] = {4,15,6,9};
int setZero(int a[],int length)
{
	for (int i = 0; i < length; i++)
		a[i] = 0;
	return 0;
}

int main()
{
	{
	//编写一个求整型数组最大值的函数
		cout << "The first code" << endl;
		cout << findMax(a1, sizeof(a1) / sizeof(int)) << endl;//输出15的原因是定义里只有return max，即cout只输出第一个值。
		cout << findMax(a2, sizeof(a2) / sizeof(int)) << endl << endl;//和上面一样，sizeof(a2) / sizeof(int)的意义是计算出数值距数组内的长度。
	}

	{
	//编写一个把int数组所有元素置0的函数
		cout << "The second code" << endl;
		setZero(a3, 4);
		for (int i = 0; i < 4; i++)
			cout << a3[i] << " ";
		cout << endl << endl;
	}
	//这节课还开了一个二维数组的小头，二维数组可以不用标明行数，但是必须要标明列数，就像a[][6]一样，因为它的计算方式为
	//数组首地址+i*N*sizeof(a[0][0])+j*sizeof(a[0][0])N为数组列数

}
