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

//int main()
//{
//	int k;
//	int ans = 0;
//	cin >> k;
//	string A, B;
//	cin.get();
//	std::getline(std::cin, A);
//	std::getline(std::cin, B);
//	set<string> se;
//	for (int i = 0; i <= A.size() - k; i++)
//	{
//		string sub = A.substr(i, k);
//		if (se.find(sub) == se.end())
//		{
//			se.insert(sub);
//			int sum = 0;
//			string bb = B;
//			while (1)
//			{
//				if (bb.find(sub) != string::npos)
//				{
//					int w = bb.find(sub);
//					bb = bb.substr(w + k);
//					sum++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			ans += sum;
//		}
//		else
//		{
//			continue;
//		}
//	}
//
//	cout << ans << endl;
//	return 0;
//}

//1Ìâ²Î¿¼´ð°¸
int answer()
{
	int k;
	string A, B;
	cin >> k;
	cin >> A >> B;
	unordered_set<string> t;
	for (int i = 0; i < A.size() -k + 1; i++)
	{
		t.insert(A.substr(i, k));
	}
	int ans = 0;
	for (int i = 0; i < B.size() - k + 1; i++)
	{
		if (t.count(B.substr(i, k)));
		ans++;
	}

	cout << ans << endl;
	return 0;
}

//2
//int main()
//{
//	long long a, b;
//	cin >> a >> b;
//	long long sum = a + b;
//	long long n = sqrt(2.0* sum);
//	if (n*(n + 1) != 2 * sum)
//		return -1;
//
//	long long cnt = 0;
//
//	if (a <= n)
//	{
//		cout << 1 << endl;
//		return 0;
//	}
//
//	long long left = a;
//	long long index = n;
//	while (left >= 0)
//	{
//		for (; index >= 1; index--)
//		{
//			left -= index;
//			cnt++;
//			if (left == 0)
//			{
//				cout << cnt << endl;
//				return 0;
//			}
//		}
//	}
//
//	cout << cnt << endl;
//	return 0;
//}

//3
//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//long long result = 0;
//
//void core(int l, int m, int n)
//{
//	int i, j, k;
//	for (i = 1; i <= min(l, m + n); i++)
//		for (j = 1; j <= min(l + n, m); j++)
//			for (k = max(i - j, j - i) + 1; k<min(i + j, n + 1); k++)
//				//if((i+j>k) && (i+k>j) && (k+j>i))
//				result++;
//	return;
//}
//
//int main()
//{
//	int l, m, n;
//	cin >> l;
//	cin >> m;
//	cin >> n;
//	core(l, m, n);
//	cout << (result % 1000000007) << endl;
//	return 0;
//}

