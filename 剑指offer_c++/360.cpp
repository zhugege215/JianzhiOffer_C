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
#include <tuple>
using namespace std;
typedef tuple<int, int, int> tup;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int m, sum = 0;
//		cin >> m;
//		for (int j = 0; j < m; j++)
//		{
//			int x1, y1, x2, y2;
//			cin >> x1 >> y1 >> x2 >> y2;
//			sum += (y2 - y1 + 1)*(x2 - x1 + 1);
//		}
//		cout << sum << endl;
//	}
//}

//int help(int r, int g, int b, int sum)
//{
//	map<tuple<int, int, int>, int> mp;
//	queue<tup> q;
//	mp[make_tuple(0,0,0)] = 0;
//	while (!q.empty())
//	{
//		tup pr = q.front(); q.pop();
//		if (get<0>(pr) == r || get<1>(pr) == g || get<2>(pr) == b)
//		{
//			break;
//		}
//		sum = max(sum, mp[pr]);
//		tup t = pr;
//		int i = get<0>(t) + 1; int j = get<1>(t) + 1; int k = get<2>(t) + 1;
//		q.push();
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int r, g, b, ans;
//		cin >> r >> g >> b;
//		ans = help(r, g, b, 0);
//		cout << ans << endl;
//	}
//}

//�ڶ���
//���漰���������ԡ�֮�������ֵmax�����⣬�����ö�̬�滮��dfs
//ͷ���У���Ƶ���ʲôʲô�������Σ�����С��ֵ���⣬������bfs