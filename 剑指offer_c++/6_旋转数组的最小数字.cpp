#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int size = rotateArray.size();
		if (size == 0)
		{
			return 0;
		}
		int left = 0, right = size - 1, mid = 0;
		while (rotateArray[left] >= rotateArray[right])
		{
			if (right - left == 1) {
				mid = right;
				break;
			}
			mid = left + (right - left) / 2;    //向下取整
			if (rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid])
			{
				return MinOrder(rotateArray, left, right);
			}
			if (rotateArray[mid] >= rotateArray[left])
			{
				left = mid;
			}
			else {
				right = mid;
			}
		}
		return rotateArray[mid];
	}
private:
	int MinOrder(vector<int> &rotateArray, int left, int right) {
		int min = rotateArray[left];
		for (size_t i = left + 1; i < right; i++)
		{
			if (rotateArray[i] < min)
			{
				min = rotateArray[i];
			}
		}
		return min;
	}
};

//int main() {
//	Solution s;
//	//vector<int> num = { 0,1,2,3,4,5 };
//	//vector<int> num = { 4,5,6,7,1,2,3 };
//	vector<int> num = { 2,2,2,2,1,2 };
//
//	int result = s.minNumberInRotateArray(num);
//	cout << result << endl;
//	return 0;
//}