#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <math.h>
using namespace std;

//int main()
//{
//	int ans = 0;
//	long long sum = 0, left, right;
//	cin >> left >> right;
//	for (int i = 1; i < left; i++)
//	{
//		sum += i;
//	}
//
//	for (int i = left; i <= right; i++)
//	{
//		sum += i;
//		if (sum % 3 == 0)
//		{
//			ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}
typedef long long ll;

//ll core(ll i, map<ll, ll>& renwu, map<ll, ll>::iterator le, map<ll, ll>::iterator ri)
//{
//	auto left = le->first;
//	auto right = ri->first;
//	auto mid = (ri - le) / 2 + le;
//	if (i < mid->first)
//		return core(i, );
//}
//
//int main()
//{
//	ll N, M;
//	ll di, pi, ai;
//	map<ll, ll> renwu;
//	cin >> N >> M;
//	vector<ll> nengli(M, 0);
//	for (long long i = 0; i < N; i++)
//	{
//		cin >> di >> pi;
//		renwu.insert(make_pair(di, pi));
//	}
//	for (auto &i : nengli)
//	{
//		cin >> ai;
//		i = ai;
//	}
//
//	for (auto &i : nengli)
//	{
//		
//	}
//}


int ans[200005];
int d[100005], p[100005];
int val[200005];
int a[100005];
int cnt = 0;
map<int, int> mp;
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d", &d[i], &p[i]);
		val[i] = d[i];
	}
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &a[i]);
		val[n + i] = a[i];
	}
	sort(val + 1, val + 1 + n + m);
	for (int i = 1; i <= n + m; i++)
	{
		if (val[i] != val[i - 1])
		{
			cnt++;
			mp[val[i]] = cnt;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		ans[mp[d[i]]] = max(ans[mp[d[i]]], p[i]);
	}
	for (int i = 2; i <= n + m; i++)
	{
		ans[i] = max(ans[i], ans[i - 1]);
	}
	for (int i = 1; i <= m; i++)
	{
		printf("%d\n", ans[mp[a[i]]]);
	}
	return 0;
}