#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int>::iterator even = array.begin();
		int size = array.size();
		while (size)
		{
			if (*even % 2 == 0) {
				int temp = *even;
				even = array.erase(even);
				array.push_back(temp);
			}
			else
				even++;
			size--;
		}
	}
};

//还有一种方法，类似于冒泡排序
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		for (auto i = array.begin(); i < array.end(); i++)
//		{
//			for (auto j = array.end() - 1; j > i; j--) {
//				if (*j % 2 == 1 && *(j - 1) % 2 == 0)
//				{
//					swap(*j, *(j - 1));
//				}
//			}
//		}
//	}
//};