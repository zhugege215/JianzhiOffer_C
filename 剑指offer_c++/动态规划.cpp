//数字三角形，路径最大数字和
//7
//3	8
//8	1	0
//2	7	4	4
//4	5	2	6	5

//递归
//#include <iostream>
//#include <algorithm>
//#define MAX 101
//using namespace std;
//int D[MAX][MAX];
//int n;
//int MaxSum(int i, int j)
//{
//	if (i == n)
//	{
//		return D[i][j];
//	}
//	return max(MaxSum(i+1, j), MaxSum(i+1, j+1)) + D[i][j];
//}
//
//int main()
//{
//	int i, j;
//	cin >> n;
//	for ( i = 1; i <= n; ++i)
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			cin >> D[i][j];
//		}
//	}
//	cout << MaxSum(1, 1) << endl;
//	return 0;
//}

//记忆型递归
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define MAX 101
//int n;
//int D[MAX][MAX];
//int maxsum[MAX][MAX];
//
//int core(int i, int j)
//{
//	if (maxsum[i][j] != -1)
//		return maxsum[i][j];
//	if (i == n)
//		maxsum[i][j] = D[i][j];
//	else
//	{
//		maxsum[i][j] = max(core(i+1, j), core(i+1, j+1)) + D[i][j];
//	}
//	return maxsum[i][j];
//}
//
//int main()
//{
//	int i, j;
//	cin >> n;
//	for ( i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cin >> D[i][j];
//			maxsum[i][j] = -1;
//		}
//	}
//	cout << core(1, 1) << endl;
//	return 0;
//}

//递推型
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define MAX 100
//int D[MAX][MAX];
//int maxsum[MAX][MAX];
//int n;
//int main()
//{
//	int i, j;
//	for (i = 1; i <= n; ++i)
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			cin >> D[i][j];
//		}
//	}
//	for (j = 1; j <= n; ++j)
//		maxsum[n][j] = D[n][j];
//	for ( i = n - 1; i >= 1; --i)
//	{
//		for (j = 1; j <= i; j++)
//			maxsum[i][j] = max(maxsum[i+1][j], maxsum[i+1][j+1]) + D[i][j];
//	}
//	cout << maxsum[1][1] << endl;
//	return 0;
//}

//递推型 + 空间复杂度
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100
int D[MAX][MAX];
int n;
int *summax;
int main()
{
	int i, j;
	cin >> n;
	for (i = 1; i <= n; ++j)
	{
		for (j = 1; j <= i; ++j)
		{
			cin >> D[i][j];
		}
	}
	summax = D[n];
	for (int i = n - 1; i >= 1; --i)
		for (int j = 1; j <= i; ++j)
			summax[j] = max(summax[j], summax[j + 1]) + D[i][j];
	cout << summax[1] << endl;
	return 0;
}