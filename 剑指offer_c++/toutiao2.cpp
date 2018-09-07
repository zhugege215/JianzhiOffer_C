#include <set>
#include <vector>
#include <stack>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_set>
#include <functional>
#include <string>
#include <map>
#include <cmath>
using namespace std;
typedef long long ll;

//int main()
//{
//	ll n, t, max, maxlen = 1;
//	cin >> n >> t;
//	vector<ll> val;
//	for (ll i = 0; i < n; i++)
//	{
//		ll temp;
//		cin >> temp;
//		val.push_back(temp);
//	}
//	vector<ll> ans;
//	for (ll i = 0; i < t; i++)
//	{
//		ans.insert(ans.end(), val.begin(), val.end());
//	}
//	vector<ll> temp;
//	ll si = ans.size();
//	for (ll i = 0; i < si; i++)
//	{
//		temp.push_back(1);
//	}
//	for (ll i = 1; i < si; i++)
//	{
//		max = 0;
//		for (ll j = 0; j <= i - 1; j++)
//		{
//			if (ans[j]<ans[i] && temp[j]>max)  
//				max = temp[j];
//		}
//		temp[i] = max + 1;
//		if (temp[i]>maxlen)           
//			maxlen = temp[i];
//	}
//	cout << maxlen << endl;
//	return 0;
//}

//int main()
//{
//	int t;
//	cin >> t;
//	vector<string> ans;
//	
//	for (int i = 1; i <= t; i++)
//	{
//		int n;
//		cin >> n;
//		vector<string> temp;
//		bool flag = false;
//		for (int j = 0; j < n; j++)
//		{
//			string str;
//			cin >> str;
//			temp.push_back(str);
//		}
//		for (int j = 0; j < n && (!flag); j++)
//		{
//			string zheng = temp[j] + temp[j];
//			string fan = zheng;
//			reverse(fan.begin(), fan.end());
//			for (int jj = 0; jj < n && (!flag); jj++)
//			{
//				if (jj == j || flag)
//					continue;
//				else
//				{
//					if (zheng.find(temp[jj]) != string::npos || fan.find(temp[jj]) != string::npos)
//					{
//						
//						flag = true;
//					}
//				}
//			}
//		}
//		if (flag)
//		{
//			ans.push_back("Yeah");
//		}
//		else
//		{
//			ans.push_back("Sad");
//		}
//	}
//
//	for (int i = 0; i < t; i++)
//	{
//		cout << ans[i] << endl;
//	}
//}

//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		vector<int> res;
//		for (int i = 0; i<nums.size(); i++) {
//			auto it = std::lower_bound(res.begin(), res.end(), nums[i]);
//			if (it == res.end()) res.push_back(nums[i]);
//			else *it = nums[i];
//		}
//		return res.size();
//	}
//};
//int main(void) {
//	Solution s;
//	vector<int> v;
//	//[10,9,2,5,3,7,101,18]
//	v.push_back(10);
//	v.push_back(9);
//	v.push_back(2);
//	v.push_back(55);
//	v.push_back(333);
//	v.push_back(777);
//	v.push_back(101);
//	v.push_back(28);
//
//	cout << s.lengthOfLIS(v) << endl;
//	return 0;
//}



//void SplitString(const string& s, vector<string>& v, const string& c)
//
//{
//
//	string::size_type pos1, pos2;
//
//	pos2 = s.find(c);
//
//	pos1 = 0;
//
//	while (string::npos != pos2)
//
//	{
//
//		v.push_back(s.substr(pos1, pos2 - pos1));
//
//
//		pos1 = pos2 + c.size();
//
//		pos2 = s.find(c, pos1);
//
//	}
//
//	if (pos1 != s.length())
//
//		v.push_back(s.substr(pos1));
//
//}

