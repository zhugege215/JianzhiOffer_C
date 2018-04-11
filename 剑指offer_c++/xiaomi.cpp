#include <algorithm>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <map>

using namespace std;
typedef long long ll;

//第一题
//ll sum_help(ll num)
//{
//	if (num <= 0)
//		return -1;
//	ll sum = 0, temp;
//	while (num)
//	{
//		temp = num % 10;
//		sum += temp * temp;
//		num /= 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	ll n;
//	cin >> n;
//	ll result;
//	map<ll, int> temp;
//	result = sum_help(n);
//	while (result != 1)
//	{
//		if (temp[result] != 0)
//		{
//			cout << "false" << endl;
//			return 0;
//		}
//		temp[result]++;
//		result = sum_help(result);
//	}
//	cout << "true" << endl;
//	return 0;
//}

// 第二题
//int jump(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		int a[3] = { 1,2,0 }, i = 3;
//		for (; i <= n; i++)
//		{
//			a[2] = a[0] + a[1];
//			a[0] = a[1];
//			a[1] = a[2];
//		}
//		return a[2];
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int result = jump(n);
//	cout << result << endl;
//	return 0;
//}

//第三题（只通过71%）
//ll help(ll num)
//{
//	if (num <= 0)
//		return -1;
//	ll ans = 0;
//	ans += num;
//	while (num)
//	{
//		num = num / 10;
//		ans += num;
//	}
//	return ans;
//}
//
//int main()
//{
//	ll n;
//	cin >> n;
//	for (ll i = 1; i <= n; i++)
//	{
//		if (help(i) == n)
//		{
//			cout << i << endl;
//			return 0;
//		}
//	}
//	cout << -1 << endl;
//	return 0;
//}