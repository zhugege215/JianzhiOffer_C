#include <Sqlist.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void QSort(Sqlist *L, int low, int high);
int Partition(Sqlist *L, int low, int high);

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


int partition(vector<int> &ans, int low, int high)
{
	int temp;
	temp = ans[low];
	while (low < high)
	{
		while (low < high && ans[high] >= temp)
			high--;
		swap(ans[low], ans[high]);
		while (low < high && ans[low] <= temp)
			low++;
		swap(ans[low], ans[high]);
	}
	return low;
}

void qsort(vector<int> &ans, int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = partition(ans, low, high);
		qsort(ans, low, pivot - 1);
		qsort(ans, pivot + 1, high);
	}
}

void quicksort(vector<int> ans)
{
	qsort(ans, 1, ans.size());
}