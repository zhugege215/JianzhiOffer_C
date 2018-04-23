#include <Sqlist.h>
extern void swap(Sqlist *L, int i, int j);

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