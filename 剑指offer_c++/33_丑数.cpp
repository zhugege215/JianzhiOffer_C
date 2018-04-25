#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		if (index < 7) return index;
		vector<int> res(index);
		res[0] = 1;

		//t2,t3,t5分别记录了2，3，5已经乘以了前第几个最小的数，每轮比较它们各自最小的数，选出最小的
		int t2 = 0, t3 = 0, t5 = 0, i;
		//注意这里一定不能是 i <= index，否则数组越界
		for (i = 1; i < index; i++)
		{
			res[i] = min(res[t2] * 2, min(res[t3] * 3, res[t5] * 5));
			if (res[i] == res[t2] * 2) t2++;
			if (res[i] == res[t3] * 3) t3++;
			if (res[i] == res[t5] * 5) t5++;
		}
		return res[index - 1];
	}
};