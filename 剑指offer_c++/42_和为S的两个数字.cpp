#include <vector>
using namespace std;

class Solution {
public:
	vector<int> FindNumberWithSum(vector<int> array, int sum) {
		vector<int> res;
		int n = array.size();
		int i = 0, j = n - 1;
		while (i < j)
		{
			if (array[i] + array[j] == sum)
			{
				res.push_back(array[i]);
				res.push_back(array[j]);
				break;
			}
			if (array[i] + array[j] > sum)
			{
				j--;
			}
			if (array[i] + array[j] < sum)
			{
				i++;
			}
		}
		return res;
	}
};