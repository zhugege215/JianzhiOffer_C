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

//��Ŀ�����������ȶ��ԣ�ÿ���ƶ�һ����������������֮��Ĳ�ԽСԽ�ȶ�����Ҫ����ָ���Ĳ�����
//�������У���һ�еĵ�һ������ָ�ж��ٸ������ڶ������ƶ���������
//��������֣���һ����һ�����ֱ��������ȶ��Ժ��ƶ��Ĳ���
//�ڶ������Ǵ������Ƶ�����Ĳ��裬�ж��ٲ������ж����С�
//int main()
//{
//	int n, k, m = 0;
//	cin >> n >> k;
//	set<pair<int, int> > s;
//	for (int i = 1; i <= n; i++) {
//		int x;
//		cin >> x;
//		s.emplace(make_pair(x, i));
//	}//����set�Դ���������,���ȸ���x��С��������x��ͬ�ģ�����i�����ٽ��emplace�����Ч��
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

//��Ŀ���������ա���n���Ȳ֣�����ÿ���Ȳ������ж�����ʳ
//m��ѯ�ʣ�ѯ�ʵڼ�����ʳ���ĸ��Ȳ�
//���m������ÿ�����ǹȲֵ�����

//�ֳ���
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

//�ο���
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


//���˯
//�Գ���Ϊk�Ļ�����������dp
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