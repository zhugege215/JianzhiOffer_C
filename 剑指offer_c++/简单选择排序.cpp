#include <Sqlist.h>
#include <vector>
using namespace std;
void SelectSort(Sqlist *L)
{
	int i, j, min;
	for (i = 1; i < L->length; i++)
	{
		min = i;
		for (j = i+1; j <= L->length; j++)
		{
			if (L->r[min] > L->r[j])
				min = j;
		}
		if (min != i)
		{
			swap(L, i, min);
		}
	}
}

void selesort(vector<int> ans)
{
	int i, j, min;
	for (i = 0; i < ans.size() - 1; i++)
	{
		min = i;
		for (j = i + 1; j < ans.size(); j++)
		{
			if (ans[j] < ans[min])
				min = j;
		}
		if (min != i)
		{
			swap(ans[i], ans[min]);
		}
	}
}