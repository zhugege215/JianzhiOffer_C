#include <Sqlist.h>
void BubbleSort(Sqlist *L)
{
	int i, j;
	bool flag = true;
	for (i = 1; i < L->length && flag; i++)
	{
		flag = false;
		for (j = L->length - 1; j >= i; j--)
		{
			if (L->r[j] > L->r[j+1])
			{
				swap(L, j, j + 1);
				flag = true;
			}
		}
	}
}