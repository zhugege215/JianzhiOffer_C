#include <vector>
#include <stack>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


//int main() {
//	int n, k;
//	cin >> n >> k;
//	vector<int> vec;
//	unordered_set<int> unset;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		vec.push_back(temp);
//	}
//
//	vector<int>::iterator i;
//	for (i = vec.begin(); i != vec.end();)
//	{
//		int vall = (*i) + k;
//		vector<int>::iterator res = find(vec.begin(), vec.end(), vall);
//		if (res != vec.end())
//		{
//			unset.insert(*i);
//		}
//		i = vec.erase(i);
//	}
//
//	/*for (auto val : vec)
//	{
//		int vall = val + k;
//		vector<int>::iterator res = find(vec.begin(), vec.end(), vall);
//		if (res != vec.end())
//		{
//			unset.insert(val);
//		}
//	}*/
//	cout << unset.size() << endl;
//	return 0;
//}

//using namespace std;
//int res = 100000000;
//void Helper(string s, string m, int n, int cnt)
//{
//	string s_temp = s;
//	string m_temp = m;
//	if (s.size() == n)
//	{
//		if (cnt < res)
//			res = cnt;
//		return;
//	}
//	if (s.size()>n)
//		return;
//	m = s;
//	s = s + s;
//	Helper(s, m, n, ++cnt);
//	s = s_temp;
//	m = m_temp;
//	cnt--;
//	s = s + m;
//	Helper(s, m, n, ++cnt);
//	return;
//}
//
//int main()
//{
//	string s = "a";
//	string m = s;
//	int n, cnt = 0;
//	cin >> n;
//	Helper(s, m, n, cnt);
//	cout << res << endl;
//	return 0;
//}