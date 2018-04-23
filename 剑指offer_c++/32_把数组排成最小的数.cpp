#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
	static bool cmp(int a, int b) {
		string A = "";
		string B = "";
		A += to_string(a);
		A += to_string(b);
		B += to_string(b);
		B += to_string(a);
		return A < B;
	}

	string PrintMinNumber(vector<int> numbers) {
		string ans = "";
		sort(numbers.begin(), numbers.end(), cmp);
		for (size_t i = 0; i < numbers.size(); i++)
		{
			ans += to_string(numbers[i]);
		}
		return ans;
	}
};


////经验证，是从小到大排
//bool cmp(int a, int b)
//{
//	return a < b;
//}
//
//int main()
//{
//	vector<int> vec = {5,3,4,1,2};
//	sort(vec.begin(), vec.end(), cmp);
//	for (auto &ii : vec)
//	{
//		cout << ii << " ";
//	}
//	return 0;
//}