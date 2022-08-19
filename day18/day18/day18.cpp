#include <iostream>
using namespace std;
//矩阵转置
int a[100][100];
int b[100][100];
//图像模糊处理
int e[100][100];
int f[100][100];
//计算鞍点
int d[5][5];
//校门外的树
int h[10000];
int start[101];
int over[101];
//年龄与疾病
#define X 4
int k[X];
//陶陶摘苹果
int s[10];
//与指定数字相同的数的个数
int p[100];

int main()
{
	{//输入一个n行m列的矩阵A，输出它的转置AT。第一行包含两个整数n和m，表示矩阵A的行数和列数。1 <= n <= 100，1 <= m <= 100。
	 //接下来n行，每行m个整数，表示矩阵A的元素。相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。
	 //m行，每行n个整数，为矩阵A的转置。相邻两个整数之间用单个空格隔开。
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				cout << a[j][i] << " ";
			cout << endl;
		}
	}

	{//给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理.
	 //1. 四周最外侧的像素点灰度值不变；2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> e[i][j];
		for (int i = 0; i < n; i++)
		{
			f[i][0] = e[i][0];
			f[i][m - 1] = e[i][m - 1];
		}
		for (int j = 0; j < m; j++)
		{
			f[0][j] = e[0][j];
			f[n - 1][j] = e[n - 1][j];
		}
		for (int i = 1; i < n - 1; i++)
			for (int j = 1; j < m - 1; j++)
			{
				f[i][j] = (int)((e[i][j] + e[i - 1][j] + e[i + 1][j] + e[i][j + 1] + e[i][j - 1]) / 5.0 + 0.5);
			}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				printf("%d ", f[i][j]);
			printf("\n");
		}
	}

	{//给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
	 //鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
		int max[5]; int min[5];
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				cin >> d[i][j];
		for (int i = 0; i < 5; i++)
		{
			int maxa = d[i][0];
			for (int j = 0; j < 5; j++)
				if (d[i][j] > maxa)
					maxa = d[i][j];
			max[i] = maxa;
		}
		for (int j = 0; j < 5; j++)
		{
			int mina = d[0][j];
			for (int i = 0; i < 5; i++)
				if (d[i][j] < mina)
					mina = d[i][j];
			min[j] = mina;
		}
		int num = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (max[i] == min[j])
				{
					cout << i + 1 << " " << j + 1 << " " << max[i];
					num = 1;
				}
			}
		}
		if (!num)
			cout << "not found";
	}

	{//某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。
	 //我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。
	 //由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。
	 //现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。
		int L, M, SUM = 0;
		cin >> L >> M;
		for (int i = 0; i <= L; i++)
			h[i] = 1;
		for (int j = 0; j < M; j++)
			cin >> start[j] >> over[j];
		for (int j = 0; j < M; j++)
			for (int k = start[j]; k <= over[j]; k++)
				h[k] = 0;
		for (int i = 0; i <= L; i++)
		{
			if (h[i] == 1)
				SUM++;
		}
		cout << SUM;
	}

	{//某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。
	 //共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
	 //按照0-18、19-35、36-60、61以上（含61）四个年龄段输出该段患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行。
		int n, b;
		cin >> n;
		for (int i = 0; i < X; i++)
			k[i] = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> b;
			if (b <= 18)
				k[0]++;
			else if (b >= 19 && b <= 35)
				k[1]++;
			else if (b >= 36 && b <= 60)
				k[2]++;
			else if (b >= 61)
				k[3]++;
		}
		for (int i = 0; i < X; i++)
			printf("%.2f%%\n", k[i] * 100.0 / n);
	}

	{//陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。
	 //陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
	 //现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。
		int  sum = 0, high, tall;
		for (int i = 0; i < 10; i++)
			cin >> s[i];
		cin >> high;
		for (int i = 0; i < 10; i++)
			if (s[i] <= high + 30)
				sum++;
		cout << sum;
	}

	{//输出一个整数序列中与指定数字相同的数的个数。
	 //第一行为N，表示整数序列的长度(N <= 100)；第二行为N个整数，整数之间以一个空格分开；第二行为N个整数，整数之间以一个空格分开；
	 //输出为N个数中与m相同的数的个数。
		int n, sum = 0, b;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> p[i];
		cin >> b;
		for (int i = 0; i < n; i++)
			if (p[i] == b)
				sum++;
		cout << sum << endl;
	}


}
