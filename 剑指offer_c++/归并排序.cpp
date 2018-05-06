#include <Sqlist.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;
void MSort(int SR[], int TR1[], int begin, int end);
void Merge(int SR[], int TR[], int begin, int mid, int end);
//void Merge(int SR[], int TR[], int i, int m, int n)
//{
//	int j, k, l;
//	for (j = m + 1, k = i; j <= n && i <= m; k++)
//	{
//		if (SR[i] < SR[j])
//			TR[k] = SR[i++];
//		else
//			TR[k] = SR[j++];
//	}
//	if (i <= m)
//	{
//		for (l = 0; l <= m - i; l++)
//		{
//			TR[k + l] = SR[i + l];
//		}
//	}
//	if (j <= n)
//	{
//		for (l = 0; l <= n - j; l++)
//		{
//			TR[k + l] = SR[j + l];
//		}
//	}
//}
//
//void MergePass(int SR[], int TR[], int s, int n)
//{
//	int i = 1;
//	int j;
//	while (i <= n-2*s+1)
//	{
//		Merge(SR, TR, i, i + s - 1, i + 2 * s - 1);
//		i = i + 2 * s;
//	}
//	if (i < n - s + 1)			                      //排最后两个
//		Merge(SR, TR, i, i + s - 1, n);
//	else                                              //将没排完的放到最后
//		for (j = i; j <= n; j++)
//			TR[j] = SR[j];
//}
//
//// 非递归实现
//void MergeSort(Sqlist *L)
//{
//	int* TR = (int *)malloc(L->length * sizeof(int));
//	int k = 1;
//	while (k < L->length)
//	{
//		MergePass(L->r, TR, k, L->length);
//		k = 2 * k;
//		MergePass(TR, L->r, k, L->length);
//		k = 2 * k;
//	}
//}

//递归实现
//注意，递归的归并排序需要利用到3个数组，即原始数组，中间结果数组和最后返回结果的数组
void MergeSort(Sqlist *L)
{
	MSort(L->r, L->r, 1, L->length);
}

void MSort(int SR[], int TR1[], int begin, int end)
{
	int mid;
	int TR2[MAXSIZE + 1];
	if (begin == end)
		TR1[begin] = SR[begin];
	else
	{
		mid = (begin + end) / 2;
		MSort(SR, TR2, begin, mid);
		MSort(SR, TR2, mid + 1, end);
		Merge(TR2,TR1, begin, mid, end);
	}
}

void Merge(int SR[], int TR[], int begin, int mid, int end)
{
	int i,j;
	for (i = begin, j = mid + 1; begin <= mid && j <= end; i++)
	{
		if (SR[begin] < SR[j])
			TR[i] = SR[begin++];
		else
			TR[i] = SR[j++];
	}
	if (begin <= mid)
	{
		for (int l = 0; l <= mid - begin; l++)
			TR[i + l] = SR[begin + l];
	}
	if (j <= end)
	{
		for (int l = 0; l <= end - j; l++)
			TR[i + l] = SR[j + l];
	}
}

//这里用的是c语言中的数组表示形式，如果使用c++的容器的话，需要引用。详见35：数组中的逆序对
void MSort(vector<int> &data, vector<int> &copy, int start, int end);
void Merge(vector<int> &data, vector<int> &copy, int start, int length, int end);

void MergeSort(vector<int> data)
{
	int length = data.size();
	if (length <= 0)
		return ;
	vector<int> copy;
	for (int i = 0; i < length; ++i)
	{
		copy.push_back(data[i]);
	}
	MSort(data, copy, 0, length-1);

	for (int i = 0; i < length; i++)
	{
		cout << copy[i] << " ";
	}
	cout << endl;
}

void MSort(vector<int> &data, vector<int> &copy, int start, int end)
{
	if (start == end)
	{
		copy[start] = data[start];
	}
	else
	{
		int length = (end - start) / 2;
		MSort(copy, data, start, start + length);
		MSort(copy, data, start + length + 1, end);
		Merge(data, copy, start, length, end);
	}
}

void Merge(vector<int> &data, vector<int> &copy, int start, int length, int end)
{
	int i, j;
	int mid = start + length;
	for (i = start, j = start + length + 1; i <= mid && j <= end; start++)
	{
		if (data[i] < data[j])
			copy[start] = data[i++];
		else
			copy[start] = data[j++];
	}

	for (; i <= mid; i++)
		copy[start++] = data[i];
	for (; j <= end; j++)
		copy[start++] = data[j];
}

//测试通过！（^_^）
//int main()
//{
//	vector<int> data = { 9,6,7,22,20,33,16,20 };
//	MergeSort(data);
//	return 0;
//}