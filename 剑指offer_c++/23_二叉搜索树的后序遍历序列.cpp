#include <vector>
using namespace std;

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		if (!sequence.size())
			return false;
		return judge(sequence, 0, sequence.size() - 1);
	}
private:
	bool judge(vector<int>& vec, int start, int end) {
		if (start >= end)
		{
			return true;
		}
		int mid = end;
		while (vec[mid - 1] > vec[end] && mid > start)
		{
			mid--;
		}
		for (int j = mid - 1; j >= start; j--)
		{
			if (vec[j] > vec[end])
				return false;
		}
		return judge(vec, start, mid - 1) && judge(vec, mid, end - 1);
	}
};