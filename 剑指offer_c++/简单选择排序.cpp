#include <Sqlist.h>
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