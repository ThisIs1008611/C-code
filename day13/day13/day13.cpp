#include <iostream>
using namespace std;
int main()
{
    {
        cout << "The first code" << endl;
        //输入正整数n(n>=2),求不大于n的全部质数
        int n;
        int i, j;
        cin >> n;
        if (n < 2)
            cout << "Error";
        else
        {
            for (i = 2; i <= n; i++)
            {
                for (j = 2; j < i; j++)
                {
                    if (i % j == 0)
                        break;
                }
                if (i == j)
                    cout << i << " ";
            }
            /*比解法做了没必要的尝试，k 大于i的平方根后就不必再试*/
            //j超过i的平方根以后其实就没有必要再去计算了，因为已经没有必要了。
        }
        cout << endl << endl << endl;
    }

    {
        cout << "The second code" << endl;
        //输入正整数n(n>=2),求不大于n的全部质数的解法2。
        //所以在这个代码中实现了简化。
        //既然从4开始代码偶数代码就有固定因子2了，那么我们不去算偶数不就行了。
        int n;
        int i, j;
        cin >> n;
        if (n < 2)
            cout << "Error" ;
        else
        {
            cout << 2 << " ";//所以从这里开始我们直接把2打出来，这样就避免了循环中出现偶数的情况。
            for (i = 3; i <= n; i += 2)//所以我们接下来两个循环从3开始算，每次+2，避开偶数。
            {
                for (j = 3; j < i; j += 2)
                {
                    if (i % j == 0)
                        break;
                    if (j * j > i)//在上个代码说过，算到i的平方根后就可以不再计算了。
                        break;//所以写出此代码，防止在平方根后继续运算，浪费时间。
                }
                if (j * j > i)//那么问题又来了，既然可以不用再算了，那么就输出所得质数即可。
                    cout << i << " ";
            }
        }
        cout << endl << endl << endl;
    }
}
