#include <iostream>
using namespace std;

//这是第一个代码的定义
#define NUM 5//一般来说定义数组是可以放在主代码里的，但是如果放在这里定义可以保证代码的可维护性。
int a[NUM];//所以在这里定义数组是最佳方法，保证了你改数字时不用在代码里一个个的改数值，并且也必须在这里定义。

//这是第二个代码的定义
#define Rua 10//你可以求10以内的，也可以定义更高的数字。
char rush[Rua + 10];//如果isPrime等于1，那么就是素数。另一个就是NAME可以只用+1，但是害怕程序越界，所以多给点。

int main()
{
    { //这个代码是开始了解数组的一个小代码。
        cout << "The first code" << endl;
    //接收键盘输入的100个整数,然后将它们按和原顺序相反的顺序输出（我把100换成5了，我没那么闲）
        for (int i = 0; i < NUM; i++)
            cin >> a[i];
        for (int i = NUM - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl << endl << endl;
    }




    {//筛法求素数。
        cout << "The second code" << endl;
        for (int i = 2; i <= Rua; i++)//首先把每个数都认为成素数。
            rush[i] = 1;//素数为1.
        for (int i = 2; i <= Rua; i++)//接下来处理不是素数的值。
        {
            if (rush[i])//值标记不是素数的值
                for (int j = 2 * i; j <= Rua; j += i)//如果i为2，那么j每次就只+2，并且它也会从4开始，相当于跳过了i，保证i不会被标记为非素数。
                                                     //同样的，如果i为3，就从6开始算，并且每次只+3.
                    rush[j] = 0;//使非素数为0.
        }//素数的划分就完成了，接下来该输出。
        for (int i = 2; i <= Rua; i++)//同样是每个数挨个判断。
            if (rush[i])//然后只输出是素数的，即为1的。
                cout << i << endl << endl << endl;
    }







}
