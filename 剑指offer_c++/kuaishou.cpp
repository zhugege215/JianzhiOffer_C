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
//1
//int main()
//{
//	map<char, int> mp;
//	string str;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (mp.find(str[i]) == mp.end())
//		{
//			mp[str[i]] = 1;
//		}
//		else
//		{
//			mp[str[i]]++;
//		}
//	}
//	string ans = "";
//	for (auto &it : mp)
//	{
//		ans = ans + it.first;
//		ans = ans + to_string(it.second);
//	}
//	cout << ans << endl;
//	return 0;
//}

//2
//int fab(int x)
//{
//	if (x == 1)
//		return 1;
//	else if (x == 2)
//		return 2;
//	else
//		return x * (x - 1) / 2;
//}
//
//int main()
//{
//	int m, temp, ans;
//	cin >> m;
//	vector<int> aa;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp;
//		aa.push_back(temp);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cout << fab(aa[i])%1000000003 << endl;
//	}
//	return 0;
//}

//3
//int main()
//{
//	int n, m, temp;
//	cin >> n >> m;
//	vector<int> v;
//	vector<int> zheng;
//	vector<int> fu;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//	int cnt = 0;
//	int temp_sum = 0, sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		temp_sum += v[i];
//		if (sum > temp_sum)
//		{
//			zheng.push_back(sum);
//			fu.push_back(v[i]);
//			cnt++;
//			temp_sum = 0;
//			sum = 0;
//		}
//		else
//		{
//			sum = temp_sum;
//		}
//	}
//
//	if (cnt <= m)
//	{
//		int ans = 0;
//		for (int i = 0; i < zheng.size(); i++)
//		{
//			ans += zheng[i];
//		}
//		cout << ans << endl;
//		return 0;
//	}
//	else
//	{
//		sort(fu.begin(), fu.end());
//		int ans = 0;
//		for (int i = 0; i < zheng.size(); i++)
//		{
//			ans += zheng[i];
//		}
//		int ans_fu = 0;
//		for (int i = 0; i < (fu.size() - (cnt - m)); i++)
//		{
//			ans_fu += fu[i];
//		}
//		cout << (ans - ans_fu) << endl;
//		return 0;
//	}
//}

//2 ´ð°¸

//a = [1, 1]
//i = 2
//while (i <= 1000) :
//	x = 0
//	temp = 0
//	while ((i - 2 * *x) >= 0) :
//		temp = temp + a[i - 2 * *x]
//		x = x + 1
//		a.append(temp)
//		i = i + 1
//		m = int(input())
//		in_list = []
//		for i in range(m) :
//			num = (int(input()))
//			print((a[num]) % (10 * *9 + 3))