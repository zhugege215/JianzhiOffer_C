#include <vector>
using namespace std;

class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int* num2) {
		if (data.size() < 2)
			return;
		int size = data.size();
		int temp = data[0];
		for (size_t i = 1; i < size; i++)
		{
			temp ^= data[i];
		}
		if (temp == 0)
			return;
		int index = 0;
		while ((temp & 1) == 0)
		{
			temp = temp >> 1;
			++index;
		}
		*num1 = *num2 = 0;
		for (int i = 0; i < size; i++) {
			if (IsBit(data[i], index))
				*num1 ^= data[i];
			else
				*num2 ^= data[i];
		}
	}

	bool IsBit(int num, int index) {
		num >>= index;
		return (num & 1);
	}
};