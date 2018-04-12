#include <Sqlist.h>

void QuickSort(Sqlist *L)
{
	QSort(L, 1, L->length);
}

void QSort(Sqlist *L, int low, int high)
{
	int pivot;
	while (low < high)
	{
		pivot = Partition(L, low, high);
		QSort(L, low, pivot - 1);
		/*QSort(L, pivot + 1, high);*/
		low = pivot + 1;
	}
}

int Partition(Sqlist *L, int low, int high)
{
	int pivotkey;
	
	int m = low + (high - low) / 2;
	if (L->r[low] > L->r[high])
		swap(L, low, high);
	if (L->r[m] > L->r[high])
		swap(L, m, high);
	if (L->r[m] > L->r[low])
		swap(L, low, m);

	pivotkey = L->r[low];

	L->r[0] = pivotkey;

	while (low < high)
	{
		while (low < high && L->r[high] >= pivotkey)
			high--;
		//swap(L, low, high);
		L->r[low] = L->r[high];
		while (low < high && L->r[low] <= pivotkey)
			low++;
		//swap(L, low, high);
		L->r[high] = L->r[low];
	}
	L->r[low] = L->r[0];
	return low;
}