#include <iostream>
#include <algorithm>
using namespace std;

int solution()
{
	int nArr[6][13] = { {0} };
	int nCost[6] = { 0, 2, 5, 3, 10, 4 };
	int nVol[6] = { 0, 1, 3, 2, 6, 2 };
	int bagV = 12;

	for (int i = 1; i < sizeof(nCost) / sizeof(int); i++)
	{
		for (int j = 1; j <= bagV; j++)
		{
			if (j < nVol[i])
				nArr[i][j] = nArr[i - 1][j];
			else
				nArr[i][j] = max(nArr[i - 1][j], nArr[i - 1][j - nVol[i]] + nCost[i]);
		}
	}

	cout << nArr[5][12] << endl;

	return 0;
}