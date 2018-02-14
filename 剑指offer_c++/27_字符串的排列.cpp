#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
	vector<string> Permutation(string str) {
		vector<string> ans;
		PermutationHelp(ans, 0, str);
		return ans;
	}
private:
	void PermutationHelp(vector<string>& ans, int k, string str) {
		if (k == str.size() - 1)
			ans.push_back(str);
		unordered_set<char> us;
		sort(str.begin() + k, str.end());
		for (size_t i = k; i < str.size(); i++)
		{
			if (us.find(str[i]) == us.end())
			{
				us.insert(str[i]);
				swap(str[i], str[k]);
				PermutationHelp(ans, k + 1, str);
				swap(str[i], str[k]);
			}
		}
	}
};