using namespace std;
#include <iostream>
#include <cstdio>
int main()
{//大象喝水一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。输入23 11，输出3.
    int a, b;
    double n ,V ;
    cin >> a >> b;
    V = 3.14159 * a * b * b * 0.001;
    n = 20 / V;
    if (n > (int)n)
    {
        n++;
        cout << (int)n;
    }
    else
    {
        cout << (int)n;
    }


    {//对于半径为r的球，其体积的计算公式为V = 4 / 3 * πr3，这里取π = 3.14 。现给定r，求V。（r为双浮点型，结果保留后两位）
        double r, V;
        scanf("%lf\n", &r);
        V = (4 / 3.0) * 3.14 * r * r * r;
        printf("%.2f", V);
    }


    {//读入一个字符，一个整数，一个单精度浮点数，一个双精度浮点数，然后按顺序输出它们，并且要求在他们之间用一个空格分隔。输出浮点数时保留6位小数。
        char a; int b; float c; double d;//第一个字符，第二个整数，第三第四分别为单双浮点型。
        scanf("%c\n%d\n%f\n%lf\n", &a, &b, &c, &d);
        printf("%c %d %.6f %.6f", a, b, c, d);     
    }

    {//读入一个双精度浮点数，保留12位小数，输出这个浮点数。
        double a;
        scanf("%lf\n", &a);
        printf("%.12f", a);
        return 0;
    }

    {//读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。只有一行，包含三个整数，整数之间以一个空格分开。
        int a, b, c;
        scanf("%d%d%d\n", &a, &b, &c);
        printf("%8d %8d %8d\n", a, b, c);
        return 0;
    }
}