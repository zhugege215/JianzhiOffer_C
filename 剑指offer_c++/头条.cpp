#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <math.h>
using namespace std;
typedef long long ll;
//const int N = 1e6 + 7;	//1000007
//int a[N];

//第一题 思路：双指针
//int main() {
//	int n, k, temp;
//	cin >> n >> k;
//	vector<int> vec(n, 0);
//	for (auto &i: vec)
//	{
//		cin >> temp;
//		i = temp;
//	}
//	sort(vec.begin(), vec.end());
//	n = unique(vec.begin(), vec.end()) - vec.begin();
//	int r = 0, ans = 0;
//	for (int l = 0; l < n; l++) {
//		while (r < n && vec[r] - vec[l] < k)
//		{
//			r++;
//		}
//		if (r == n) break;
//		if ((vec[r] - vec[l]) == k)
//			ans++;
//	}
//	cout << ans;
//	return 0;
//}

//int main() {
//	ifstream in("file_test.txt");
//	string a,b;
//	int aa;
//	/*while (getline(in, a))
//	{
//		cout << a << endl;
//	}*/
//	in >> a;
//	in >> b;
//	in >> aa;
//	cout << a << endl;
//	cout << b << endl;
//	cout << aa << endl;
//}

//int main() {
//	map<string, size_t> word_count;
//	set<string> exclude = {"The", "But", "And", "a"};
//	string word;
//	while (cin >> word)       //ctrl + z结束
//	{
//		if(exclude.find(word) == exclude.end())
//			++word_count[word];
//	}
//	for (const auto &w : word_count)
//		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
//}

//第二题 思路：经过推到，发现是一个搜索过程，答案即为搜索的次数。bfs， 利用队列实现
//typedef pair<int, int> pii;
//map<pair<int, int>, int> mp;
//int main()
//{
//	int n;
//	cin >> n;
//	queue<pii> q;
//	q.push(make_pair(1, 1));
//	mp[make_pair(1, 1)] = 0;
//	while (!q.empty())
//	{
//		pii pr = q.front(); q.pop();
//		if (pr.first == n)
//		{
//			cout << mp[pr];
//			exit(0);
//		}
//		pii t = pr;
//		t.second = t.first; t.first *= 2;
//		if (!mp.count(t))
//		{
//			q.push(t);
//			mp[t] = mp[pr] + 1;
//		}
//		t = pr;
//		t.first = t.first + t.second;
//		if (!mp.count(t))
//		{
//			q.push(t);
//			mp[t] = mp[pr] + 1;
//		}
//	}
//	return 0;
//}


//第三题 场景题
//typedef long long ll;

//string G[5][10] = 
//{
//	{ "66666", "....6", "66666", "66666", "6...6", "66666", "66666", "66666", "66666", "66666" },
//	{ "6...6", "....6", "....6", "....6", "6...6", "6....", "6....", "....6", "6...6", "6...6" },
//	{ "6...6", "....6", "66666", "66666", "66666", "66666", "66666", "....6", "66666", "66666" },
//	{ "6...6", "....6", "6....", "....6", "....6", "....6", "6...6", "....6", "6...6", "....6" },
//	{ "66666", "....6", "66666", "66666", "....6", "66666", "66666", "....6", "66666", "66666" }
//};
//ll cal(string s)
//{
//	int n = s.size();
//	ll cur = 0, sum = 0, prd = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (isdigit(s[i]))
//			cur = cur * 10 + s[i] - '0';
//		else if (s[i] == '-')
//		{
//			cur *= prd;
//			sum += cur;
//			cur = 0;
//			prd = -1;
//		}
//		else if (s[i] == '+')
//		{
//			cur *= prd;
//			sum += cur;
//			cur = 0;
//			prd = 1;
//		}
//		else
//		{
//			prd *= cur;
//			cur = 0;
//		}
//	}
//	return sum + prd * cur;
//}
//int main()
//{
//	int T;
//	string s;
//	cin >> T;
//	while (T--)
//	{
//		cin >> s;
//		ll ans = cal(s);
//		for (int i = 0; i < 5; i++)
//		{
//			vector<int> vec;
//			ll tmp = ans;
//			while (tmp)
//			{
//				vec.push_back(tmp % 10);
//			    tmp /= 10;
//			}
//				
//			reverse(vec.begin(), vec.end());
//			if (vec.empty()) vec.push_back(0);
//			for (int j = 0; j < vec.size(); j++)
//				cout << G[i][vec[j]] << ((j + 1 == vec.size()) ? "\n" : ".."); //这里最后的条件运算一定要加括号，否则会乱码。。。
//		}
//	}
//	return 0;
//}

//第四题  数学题规律题
//const long double eps = 1e-14;
//inline int cmp(long double a, long double b)
//{
//	if (fabs(a - b) <= eps)
//		return 0;
//	return a > b ? 1 : -1;
//}
//
//inline long double avge(ll k, int length)
//{
//	return (long double)k / length;
//}
//int main()
//{
//	int n, m, temp;
//	ll suma = 0, sumb = 0;
//	cin >> n >> m;
//	set<int> sa;
//	set<int> sb;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		sa.insert(temp);
//		suma += temp;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp;
//		sb.insert(temp);
//		sumb += temp;
//	}
//	if (cmp(avge(suma, n), avge(sumb, m)) == -1)
//	{
//		swap(suma, sumb);
//		swap(n, m);
//		sa.swap(sb);
//	}
//
//	int ans = 0;
//	for (auto k : sa)
//	{
//		if (cmp(k, avge(suma, n)) >= 0) break;
//		if (!sb.count(k) && cmp(k, avge(sumb, m)) > 0)
//		{
//			ans++;
//			sumb += k;
//			suma -= k;
//			sb.insert(k);
//			n--; m++;
//		}
//	}
//	cout << ans;
//}

//第五题
using namespace std;
const int N = 1e5 + 1000;
typedef pair<int, int> pii;

int main()
{
	int n, k, h, temp;
	cin >> n >> k >> h;
	vector<int> a(N, 0);
	vector<bool> vis(N, false);
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a[temp] = 1;
	}
	queue<pii> q;
	q.push(make_pair(0, 0));
	int ans = 0;
	while (!q.empty())
	{
		pii p = q.front(); q.pop();
		if (p.second > k) break;
		ans = max(ans, p.first);
		for (int i = 1; i <= h; i++)
		{
			if (a[p.first + i] && !vis[p.first + 2*i])
			{
				vis[p.first + 2 * i] = true;
				q.push(make_pair(p.first + 2 * i, p.second + 1));
			}
			if (a[p.first - 2 * i] && a[p.first - i] && !vis[p.first - 2 * i])
			{
				vis[p.first - 2 * i] = true;
				q.push(make_pair(p.first - 2 * i, p.second + 1));
			}
		}
	}
	cout << ans;
	return 0;
}