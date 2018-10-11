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

//int ans = 0;
//
//void dfs(int n1, int n2, int n3, int t)
//{
//	if (n1 == 0 && n2 == 0 && n3 == 0)
//	{
//		ans++;
//		return;
//	}
//	if (n1 > 0 && t != 1)
//	{
//		dfs(n1 - 1, n2, n3, 1);
//	}
//	if(n2 > 0 && t != 2)
//	{
//		dfs(n1, n2 - 1, n3, 2);
//	}
//	if (n3 > 0 && t != 3)
//	{
//		dfs(n1, n2, n3 - 1, 3);
//	}
//}
//
//int main()
//{
//	int n1, n2, n3;
//
//	cin >> n1 >> n2 >> n3;
//	if (n1 < 0 || n2 < 0 || n3 < 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//
//	dfs(n1, n2, n3, 0);
//	if (ans == 0)
//		cout << 0 << endl;
//	else
//		cout << ans << endl;
//	return 0;
//}

//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n;
//		cin >> n;
//		map<int, vector<int>> mp;
//		vector<int> jilu;
//		for (int i = 1; i <= n; i++)
//		{
//			char signal;
//			int x1, y1, x2, y2;
//			cin >> signal >> x1 >> y1 >> x2 >> y2;
//			if (signal == 'T' && mp.size() >= 1)
//			{
//				for()
//			}
//
//		}
//	}
//}