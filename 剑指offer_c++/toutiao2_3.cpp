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

//第三次

//1题 leetcode 3
//int main()
//{
//	string s;
//	cin >> s;
//	vector<int> dp(256, -1);
//	int start = -1, len = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (dp[s[i]] > start)
//			start = dp[s[i]];
//		dp[s[i]] = i;
//		int temp_len = i - start;
//		len = temp_len > len ? temp_len : len;
//	}
//	cout << len << endl;
//	return 0;
//}

//2题 bfs
//void bfs(vector<vector<int>> &grid, int i, int j)
//{
//	if (i<0 || i>grid.size() - 1 || j<0 || j>grid[0].size() - 1 || grid[i][j] == 0)
//		return;
//	grid[i][j] = 0;
//	bfs(grid, i - 1, j);
//	bfs(grid, i + 1, j);
//	bfs(grid, i, j - 1);
//	bfs(grid, i, j + 1);
//	return;
//}
//
//int main()
//{
//	int M;
//	cin >> M;
//	vector<vector<int> > grid(M, vector<int>(M, 0));
//
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> grid[i][j];
//			cin.get();
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (grid[i][j] == 1)
//			{
//				bfs(grid, i, j);
//				ans++;
//			}
//		}
//	}
//
//	cout << ans << endl;
//	return 0;
//}

//3题 Restore IP Addresses
//void process(int& ans, string &s, int start, int end, int time) {
//	if (end > s.size()) {
//		return;
//	}
//	if (time >3) {
//		return;
//	}
//	string sub = s.substr(start, end - start);
//	if (sub[0] == '0' && sub.size()>1) {
//		return;
//	}
//	if (atoi(sub.c_str()) > 255) {
//		return;
//	}
//	else {
//		if (end == s.size() && time == 3) {
//			ans++;
//			return;
//		}
//	}
//
//	process(ans, s, end, end + 1, time + 1);
//	process(ans, s, end, end + 2, time + 1);
//	process(ans, s, end, end + 3, time + 1);
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.size();
//	int ans = 0;
//	vector<string> result;
//	if (len == 0) {
//		cout << ans << endl;
//		return 0;
//	}
//
//	process(ans, s, 0, 1, 0);
//	process(ans, s, 0, 2, 0);
//	process(ans, s, 0, 3, 0);
//
//	cout << ans << endl;
//	return 0;
//}


//4题 leetcode 393
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> data;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		temp = temp & 0xff;
//		data.push_back(temp);
//	}
//
//	int count = 0;
//	for (auto aa : data) {
//		if (count == 0) {
//			if ((aa >> 5) == 0b110) count = 1;
//			else if ((aa >> 4) == 0b1110) count = 2;
//			else if ((aa >> 3) == 0b11110) count = 3;
//			else if ((aa >> 7)) 
//			{
//				cout << 0 << endl;
//				return 0;
//			}
//		}
//		else {
//			if ((aa >> 6) != 0b10)
//			{
//				cout << 0 << endl;
//				return 0;
//			}
//			count--;
//		}
//	}
//	if (count == 0)
//	{
//		cout << 1 << endl;
//	}
//	else
//		cout << 0 << endl;
//	return 0;
//}

//第五题 抖音红人//并查集
#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <malloc.h>
//
//using namespace std;
//
//int core(int n, int m, vector<int> input)
//{
//	int i, j;
//	int result = 0;
//	map<int, vector<int> > relation;
//	deque<int> help;
//	vector<int> res(n + 1, 0);
//	vector<int> tag(n + 1, -1);
//	for (i = 0; i<input.size(); i = i + 2)
//	{
//		relation[input[i]].push_back(input[i + 1]);
//	}
//	for (i = 1; i <= n; i++)
//	{
//		help.push_back(i);
//		tag[i] = 0;
//		while (!help.empty())
//		{
//			int m = help.front();
//			help.pop_front();
//			for (j = 0; j<relation[m].size(); j++)
//			{
//				if (find(help.cbegin(), help.cend(), relation[m][j]) == help.cend() && tag[relation[m][j]] == -1)
//				{
//					help.push_back(relation[m][j]);
//					tag[relation[m][j]] = 0;
//					res[relation[m][j]]++;
//				}
//			}
//		}
//		for (j = 0; j<tag.size(); j++)
//			tag[j] = -1;
//	}
//	for (i = 1; i<res.size(); i++)
//	{
//		if (res[i] == n - 1)
//			result++;
//	}
//	return result;
//}
////n个人，m个关系，求一个人与其他人都有直接或者间接的联系，这样的人有几个
//int main()
//{
//	int n, m;
//	int i, temp;
//	vector<int> input;
//	cin >> n;
//	cin >> m;
//	for (i = 0; i<2 * m; i++)
//	{
//		cin >> temp;
//		input.push_back(temp);
//	}
//	cout << core(n, m, input) << endl;
//	return 0;
//}

//第四范式
//矩阵查数 （牛客二维数组中的查找）

//判断二分图

#include <queue>
#include <cstring>
#include <iostream>
using namespace std;

//0为白色，1为黑色
//bool bfs(int s, int n, vector<int>color, vector<vector<int> >graph) {
//	queue<int> q;
//	q.push(s);
//	color[s] = 1;
//	while (!q.empty()) {
//		int from = q.front();
//		q.pop();
//		for (int i = 1; i <= n; i++) {
//			if (graph[from][i] && color[i] == -1) {
//				q.push(i);
//				color[i] = !color[from];//染成不同的颜色
//			}
//			if (graph[from][i] && color[from] == color[i])//颜色有相同，则不是二分图
//				return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int n, m, a, b, i;
//	cin >> n >> m;
//	vector<int> color(n + 1, -1);
//	vector<vector<int> > graph(n + 1, vector<int>(n + 1, 0));
//	for (i = 0; i < m; i++) {
//		cin >> a >> b;
//		graph[a][b] = graph[b][a] = 1;
//	}
//	bool flag = false;
//	for (i = 1; i <= n; i++)
//		if (color[i] == -1 && !bfs(i, n, color, graph)) {//遍历各个连通分支
//			flag = true;
//			break;
//		}
//	if (flag)
//		cout << "NO" << endl;
//	else
//		cout << "YES" << endl;
//	return 0;
//}