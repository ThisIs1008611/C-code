#include <iostream>
#include <cstring>//这是包含字符串所必须调用的库函数。
using namespace std;

int bitManipulation1(int n, int m, int i) {
    // 在此处补充你的代码。写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位和m的第i位相同，其他位和n相同。
    //请使用【一行代码】补全bitManipulation1函数使得程序能达到上述的功能
    return ((~(1 << i) & n) | ((1 << i) & m));
}

int bitManipulation2(int n, int i) {
    // 在此处补充你的代码。写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位是n的第i位取反，其余位和n相同
    //请使用【一行代码】补全bitManipulation2函数使得程序能达到上述的功能
    return (1 << i) ^ n;
}





int main()
{
    //我以前觉得我可以每天看两节课来赶进度，现在想想，还是前面的代码好理解啊，要理解透彻，就不能急。
    //今天是字符串。
    //因为老师的中二病气息太严重，例题好羞耻，所以我自己来写一个。
    {
        cout << "The first code" << endl;
        //既然是字符串那肯定要用char啊。
        char abc[] = "Your life";//我定义了一个名字叫abc的函数，但我没有给函数里添加范围，不过所赋值的元素会自动添加范围，而且，每个元素的最后一个都是‘\0’。
        char bbc[100] = "a wonderful life";//不过我觉得不给函数赋予范围是不是更好点。
        char cbc[100];
        char dbc[100];
        cout << "Do you love" << abc << endl;
        cin >> cbc;
        if (strcmp/*这个strcmp啊是用来比较字符串的函数*/(cbc, "yes") == 0)
            cout << "Ok,keep on this attitude,you'll have " << bbc << endl;
        else
        {
            strcpy/*这个strcpy啊是用来拷贝字符串的函数*/(dbc, "Okay,you need to cheer up,and thenback to normal life!\n"/*这里的书写格式是和C语言一样的，和C++不一样*/);
                cout << dbc;
        }
        //既然这些都写完了，那么该改一些东西了
        //比如说，我想把‘你的生活’改为‘你的liv’呢？
        abc[7] = 'v';//abc函数里的排列是：Your life\0,f为第七个，并且这个\0是属于停止符，因为C语言是要在\0停下来的，并且\0也等于0.
        abc[8] = 0;
        cout << abc << endl << endl;
    }

    {
    //那么问题又来了，我想输出双引号或者\怎么办？
        cout << "The second code" << endl;
        cout << "He said:\"I'm 18\\years old.\"" << endl << endl;
    /*    解决方法就是\"和\\，记住，要输出一些符号的话就在前面加入\就行   */
    }

   
    {//这是题
        cout << "The title 1" << endl;
        int n, m, i, t;
        cin >> t;
        while (t--)
        {
            cin >> n >> m >> i;
            cout << bitManipulation1(n, m, i) << endl;

        }
    }

    {//这也是题
        cout << endl;
        cout << "The title 2" << endl;
        int t, n, i;
        cin >> t;
        while (t--) 
        {
            cin >> n >> i;
            cout << bitManipulation2(n, i) << endl;
        }

    

}
