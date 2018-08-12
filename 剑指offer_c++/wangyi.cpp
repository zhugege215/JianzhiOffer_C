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

//题目描述：塔的稳定性，每次移动一个，最高塔和最低塔之间的差越小越稳定。且要求在指定的步数内
//输入两行，第一行的第一个数是指有多少个塔，第二个是移动步数限制
//输出两部分，第一部分一样，分别是最后的稳定性和移动的步数
//第二部分是从哪里移到哪里的步骤，有多少步，就有多少行。
//int main()
//{
//	int n, k, m = 0;
//	cin >> n >> k;
//	set<pair<int, int> > s;
//	for (int i = 1; i <= n; i++) {
//		int x;
//		cin >> x;
//		s.emplace(make_pair(x, i));
//	}//利用set自带的排序功能,首先根据x从小到大排序，x相同的，根据i排序，再结合emplace，提高效率
//	//for (auto ss : s)
//	//{
//	//	cout << ss.first <<" "<< ss.second  << endl;
//	//}
//	//return 0;
//	vector<pair<int, int> > ans;
//	while (k && s.size() > 1 && s.rbegin()->first - s.begin()->first > 1)
//	{
//		auto a = *s.begin(), b = *s.rbegin();
//		s.erase(a), s.erase(b);
//		k--;
//		a.first++;
//		b.first--;
//		s.insert(a);
//		s.insert(b);
//		ans.emplace_back(make_pair(b.second, a.second));
//	}
//	cout << s.rbegin()->first - s.begin()->first << " " << ans.size() << endl;
//	for (auto p : ans)
//		cout << p.first << " " << p.second << endl;
//	return 0;
//}

//题目描述：丰收。有n个谷仓，输入每个谷仓里面有多少粮食
//m个询问，询问第几个粮食在哪个谷仓
//输出m个数，每个都是谷仓的索引

//现场答案
//long long core(vector<int> &ai, long long target)
//{
//	int n = ai.size();
//	int low = 0, high = n - 1, middle = 0;
//	while (low < high) {
//		middle = (low + high) / 2;
//
//		if (target == ai[middle]) {
//			return middle;
//		}
//		else if (target < ai[middle]) {
//			high = middle;
//		}
//		else if (target > ai[middle]) {
//			low = middle + 1;
//		}
//		else if (middle + 1 <= n && target > ai[middle] && target <= ai[middle + 1]) {
//			return middle + 1;
//		}
//	}
//	return low;
//}
//
//int main()
//{
//	long long n, m, sum = 0;
//	int temp;
//	long long temp1;
//	vector<int> ai;
//	vector<long long> qi;
//	cin >> n;
//	for (long long i = 0; i < n; i++)
//	{
//		cin >> temp;
//		sum += temp;
//		ai.push_back(sum);
//	}
//	cin >> m;
//	for (long long i = 0; i < m; i++)
//	{
//		cin >> temp1;
//		qi.push_back(temp1);
//	}
//	if (n == 1)
//	{
//		for (long long j = 0; j < m; j++)
//			cout << 1 << endl;
//		return 0;
//	}
//	else
//	{
//		for (long long j = 0; j < m; j++)
//		{
//			long long ans = core(ai, qi[j]) + 1;
//			cout << ans << endl;
//		}
//		return 0;
//	}
//}

//参考答案
//int sum[100005];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		scanf("%d", &a);
//		sum[i] = sum[i - 1] + a;
//	}
//	int q;
//	scanf("%d", &q);
//	while (q--)
//	{
//		int d;
//		scanf("%d", &d);
//		int pos = lower_bound(sum, sum + n + 1, d) - sum;
//		printf("%d\n", pos);
//	}
//	return 0;
//}


//打瞌睡
//以长度为k的滑动窗口做个dp
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<int> a(n), t(n);
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//		cin >> t[i], ans += a[i] * t[i];
//
//	int temp = ans;
//	for (int i = 0; i < n;)
//	{
//		temp += (!t[i]) * a[i];
//		if (++i >= k)
//		{
//			ans = max(ans, temp);
//			temp -= (!t[i - k]) * a[i - k];
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}