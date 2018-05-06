#include <Sqlist.h>
#include <vector>
using namespace std;

void InsertSort(Sqlist *L)
{
	int i, j;
	for (i = 2; i <= L->length; i++)
	{
		if (L->r[i] < L->r[i-1])
		{
			L->r[0] = L->r[i];
			for (j = i - 1; L->r[j] > L->r[0]; j--)
			{
				L->r[j + 1] = L->r[j];
			}
			L->r[j + 1] = L->r[0];
		}
	}
}

void insersort(vector<int> ans)
{
	int i, j, temp;
	for (i = 1; i < ans.size(); i++)
	{
		if (ans[i - 1] > ans[i])
		{
			temp = ans[i];
			for (j = i - 1; ans[j] > temp; j--)
				ans[j + 1] = ans[j];
			ans[j + 1] = temp;
		}
	}
}