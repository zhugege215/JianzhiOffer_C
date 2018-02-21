#include <vector>
using namespace std;

class Solution {
public:
	int LastRemaining_Solution(int n, int m) {
		if (n < 1 || m < 1)
			return -1;
		vector<int> array(n, 0);
		int i = -1, step = 0, count = n;
		while (count > 0)
		{
			i++;
			if (i >= n) i = 0;
			if (array[i] == -1) continue;
			step++;
			if (step == m)
			{
				array[i] = -1;
				step = 0;
				count--;
			}
		}
		return i;
	}
};