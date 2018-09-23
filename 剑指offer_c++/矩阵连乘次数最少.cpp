#include <iostream>
using namespace std;
#define maxn 1000
int d[maxn + 5];
int dd[maxn + 5][maxn + 5];

int min_multiply()
{
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cin >> d[i];
	}

	for (int i = 1; i <= n; i++)
	{
		dd[i][i] = 0;
	}

	int cur;
	for (int r = 2; r <= n; r++)
	{
		for (int i = 1; i <= n - r + 1; i++)
		{
			int j = i + r - 1;
			dd[i][j] = dd[i + 1][j] + d[i - 1] * d[i] * d[j];
			for (int k = i; k < j; k++)
			{
				cur = dd[i][k] + dd[k + 1][j] + d[i - 1] * d[k] * d[j];
				if (cur < dd[i][j])
					dd[i][j] == cur;
			}
		}
	}

	cout << dd[1][n] << endl;
	return 0;
}