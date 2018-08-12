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
//int sum = 0;
//1
//void bfs(vector<vector<int>> &grid, int i, int j, int& num)
//{
//	if (i<0 || i>grid.size() - 1 || j<0 || j>grid[0].size() - 1 || grid[i][j] == 0)
//		return;
//	grid[i][j] = 0;
//	++num;
//	bfs(grid, i - 1, j, num);
//	bfs(grid, i + 1, j, num);
//	bfs(grid, i, j - 1, num);
//	bfs(grid, i, j + 1, num);
//	bfs(grid, i - 1, j - 1, num);
//	bfs(grid, i - 1, j + 1, num);
//	bfs(grid, i + 1, j - 1, num);
//	bfs(grid, i + 1, j + 1, num);
//	return;
//}
//
//int main()
//{
//	int M, N;
//	cin >> M;
//	cin.get();
//	cin >> N;
//	vector<vector<int> > grid(M, vector<int>(N, 0));
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> grid[i][j];
//			cin.get();
//		}
//	}
//
//	int num = 0, maxNum = 0;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (grid[i][j] == 1)
//			{
//				int tmpMax = 0;
//				bfs(grid, i, j, tmpMax);
//				num++;
//				if (tmpMax > maxNum)
//					maxNum = tmpMax;
//			}
//		}
//	}
//	cout << num << "," << maxNum << endl;
//	return 0;
//}

//int main()
//{
//	int n, m, ans = 0;
//	vector<pair<int, int> > list;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//		list.push_back(make_pair(temp1, temp2));
//	}
//	for (int i = 0; i < list.size() - 1; i++)
//	{
//		if (list[i].second > list[i + 1].first)
//			continue;
//		else
//		{
//			ans++;
//		}
//	}
//	cout << ans << endl;
//}


//int main()
//{
//	long long n;
//	cin >> n;
//	vector<long long> a, b;
//	long long ans = 0;
//	while (n--)
//	{
//		long long temp;
//		cin >> temp;
//		a.push_back(temp);
//	}
//	while (n--)
//	{
//		long long temp;
//		cin >> temp;
//		b.push_back(temp);
//	}
//
//	for (long long i = 0; i < n; i++)
//	{
//		if (a[i] < b[i])
//			ans++;
//	}
//	for (auto it = 0; it < n - 1; it++)
//	{
//		for (auto en = it++; it < n; it++)
//		{
//
//		}
//	}
//}