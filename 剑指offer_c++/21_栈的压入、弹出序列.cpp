#include <vector>
using namespace std;

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		vector<int> temp;
		temp.clear();
		if (pushV.size() == 0)
		{
			return false;
		}
		for (size_t i = 0, j = 0; i < pushV.size(); i++)
		{
			temp.push_back(pushV[i]);
			while (temp.back() == popV[j] && j < popV.size())
			{
				temp.pop_back();
				j++;
			}
		}
		return temp.empty();
	}
};