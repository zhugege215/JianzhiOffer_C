#include <Sqlist.h>
#include <stdlib.h>

void Merge(int SR[], int TR[], int i, int m, int n)
{
	int j, k, l;
	for (j = m + 1, k = i; j <= n && i <= m; k++)
	{
		if (SR[i] < SR[j])
			TR[k] = SR[i++];
		else
			TR[k] = SR[j++];
	}
	if (i <= m)
	{
		for (l = 0; l <= m - i; l++)
		{
			TR[k + l] = SR[i + l];
		}
	}
	if (j <= n)
	{
		for (l = 0; l <= n - j; l++)
		{
			TR[k + l] = SR[j + l];
		}
	}
}

void MergePass(int SR[], int TR[], int s, int n)
{
	int i = 1;
	int j;
	while (i <= n-2*s+1)
	{
		Merge(SR, TR, i, i + s - 1, i + 2 * s - 1);
		i = i + 2 * s;
	}
	if (i < n - s + 1)			                      //排最后两个
		Merge(SR, TR, i, i + s - 1, n);
	else                                              //将没排完的放到最后
		for (j = i; j <= n; j++)
			TR[j] = SR[j];
}

// 非递归实现
void MergeSort(Sqlist *L)
{
	int* TR = (int *)malloc(L->length * sizeof(int));
	int k = 1;
	while (k < L->length)
	{
		MergePass(L->r, TR, k, L->length);
		k = 2 * k;
		MergePass(TR, L->r, k, L->length);
		k = 2 * k;
	}
}