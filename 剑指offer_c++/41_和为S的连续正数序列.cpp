#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
	vector<vector<int> > FindContinuousSequence(int sum) {
		vector<vector<int> > res;
		if (sum < 3) return res;
		int mid = (sum + 1) >> 1;
		int begin = 1, end = 2;
		int cur = begin + end;
		while (begin < mid && end < sum) {
			while (cur > sum) {
				cur -= begin;
				begin++;
			}
			if (cur == sum) {
				InsertRes(begin, end, res);
			}
			end++;
			cur += end;
		}
		return res;
	}

	void InsertRes(int begin, int end, vector<vector<int> >& res) {
		vector<int> temp;
		for (size_t i = begin; i <= end; i++)
		{
			temp.push_back(i);
		}
		res.push_back(temp);
	}
};