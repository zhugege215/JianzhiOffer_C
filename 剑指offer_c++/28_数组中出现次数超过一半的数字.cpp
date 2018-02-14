#include <vector>
using namespace std;

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int n = numbers.size();
		if (n == 0)
			return 0;
		int num = numbers[0], count = 1;
		for (size_t i = 1; i < n; i++)
		{
			if (numbers[i] == num) 
				count++;
			else 
				count--;
			if (count == 0)
			{
				num = numbers[i];
				count = 1;
			}
		}

		count = 0;
		for (size_t i = 0; i < n; i++)
		{
			if (num == numbers[i])
				count++;
		}
		if (count * 2 > n)
			return num;
		return 0;
	}
};