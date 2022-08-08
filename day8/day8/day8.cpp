#include <iostream>
using namespace std;
int main()
{
    {cout << "The first code" << endl;
    //写一个程序，输入整数a，从小到大输入它所有因子。        //写一个程序，输入整数a，从大到小输入它所有因子。
        int a;                                               //int a;
        cin >> a;                                            // cin >> a;
        for (int i = 1; i <= a; i++)                         //for (int i = 1; i <= a; i--)
            if (a % i == 0)                                  //if (a % i == 0)
                cout << i << endl << endl << endl;                           //cout << i << endl; 

    }

    {
        cout << "The second code" << endl;
        //给定正整数n和m，在1到n的数中取两个不同的数，使其和是m因子，有多少种取法。
        int n, m,sum=0;
        cin >> n >> m;
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (m % (i + j) == 0)
                    sum++;
        cout << sum << endl;
    }

    {
     //   for (;;)                         for里没有东西的话为真，会一直输出下去直到你电脑打出gg。
     //       cout << "bruh" << endl;      所以在这里我把代码换为注释。
    }


}
