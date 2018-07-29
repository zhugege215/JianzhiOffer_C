#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans;
		unordered_map<int, int> mp;
		for (int i = 0; i < nums.size(); i++)
		{
			int resi = target - nums[i];
			if (mp.find(resi) != mp.end())
			{
				ans.push_back(mp[resi]);
				ans.push_back(i);
				return ans;
			}
			mp[nums[i]] = i;
		}
	}
};