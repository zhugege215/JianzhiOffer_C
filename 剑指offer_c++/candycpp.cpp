#include <vector>
using namespace std;

class Solution
{
public:
	int candy(vector<int> &ratings)
	{
		int len = ratings.size();
		if (len == 1) return 1;

		int sum = 0;
		vector<int> v(len, 1);

		for (int i = 1; i < len; i++)
		{
			if (ratings[i] > ratings[i - 1])
				v[i] = v[i - 1] + 1;
		}
		for (int i = len - 2; i >= 0; i--)
		{
			if (ratings[i] > ratings[i + 1] && v[i] <= v[i + 1])
				v[i] = v[i + 1] + 1;
		}
		for (int i = 0; i < len; i++)
			sum += v[i];
		return sum;
	}
};