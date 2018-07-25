#include <Sqlist.h>
#include <vector>
#include <algorithm>
using namespace std;

//除[s]之外所有均满足堆定义
void HeapAdjust(Sqlist *L, int s, int m)
{
	int temp, j;
	temp = L->r[s];
	for (j = 2 * s; j <= m; j*=2)
	{
		if (j < m && L->r[j] < L->r[j + 1])
		{
			++j;
		}
		if (temp >= L->r[j])
			break;
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[s] = temp;
}

void HeapSort(Sqlist *L)
{
	int i;
	for (i = L->length / 2; i > 0; i--)
	{
		HeapAdjust(L, i, L->length);
	}

	for (i = L->length; i > 1; i--)
	{
		swap(L, 1, i);
		HeapAdjust(L, 1, i - 1);
	}
}

void core(vector<int> &ans, int start, int len)
{
	int temp, j;
	temp = ans[start];
	for (j = 2 * start + 1; j <= len; j = 2 * j + 1)
	{
		if (j < len && ans[j] < ans[j + 1])
			j++;
		if (temp > ans[j])
			break;
		ans[start] = ans[j];
		start = j;
	}
	ans[start] = temp;
}

void heapsort(vector<int> &ans)
{
	int i;
	for (i = ans.size() / 2 - 1; i >= 0; i--)
	{
		core(ans, i, ans.size() - 1);
	}

	for (i = ans.size() - 1; i > 0; i--)
	{
		swap(ans[0], ans[i]);
		core(ans, 0, i - 1);
	}
}