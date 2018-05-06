#include <Sqlist.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
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

void bubsort(vector<int> demo)
{
	int i, j;
	for (i = 0; i < demo.size() - 1; i++)
	{
		for (j = demo.size() - 2; j >= i; j--)
		{
			if (demo[j] > demo[j + 1])
				swap(demo[j], demo[j + 1]);
		}
	}
}

//交换测试，swap可以交换vector中元素的值
//int main()
//{
//	vector<string> demo = { "a","b","c","d","e","f" };
//	swap(demo[0], demo[4]);
//	for (auto &ii : demo)
//	{
//		cout << ii << " ";
//	}
//	return 0;
//}