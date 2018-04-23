#include <algorithm>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;

//第一题循环做，存在超时
//int main()
//{
//	ll n, m, sum = 0,flag = -1;
//	cin >> n >> m;
//	if (n % (2 * m) == 0)
//	{
//		for (ll i = 1; i <= n; i++)
//		{
//			sum += flag*i;
//			if ((i%m) == 0)
//				flag = -flag;
//		}
//		cout << sum << endl;
//	}
//}

//第一题根据规律做，ac
//int main()
//{
//	long long n, sum = 0;
//	int flag = -1;
//	int m;
//	cin >> n >> m;
//	long res1 = 0, res2 = 0;
//	int cols = (n >> 1) / m;
//	if (n % (2 * m) == 0) {
//		for (int i = 1; i <= m; ++i)
//			res1 += cols * i + cols * (cols - 1) * m;
//		for (int i = m + 1; i <= 2 * m; ++i)
//			res2 += cols * i + cols * (cols - 1) * m;
//		cout << res2 - res1 << endl;
//	}
//	return 0;
//}


//第二题dfs，通过30%
//int k;
//int gealong, geashuliang, geblong, gebshuliang;
//long long sum = 0;
//void help(int k)
//{
//	if (k < 0)
//		return;
//	if (k==0)
//	{
//		++sum;
//	}
//	else
//	{
//		if (geashuliang > 0)
//		{
//			--geashuliang;
//			help(k- gealong);
//		}
//		if (gebshuliang > 0)
//		{
//			--gebshuliang;
//			help(k - geblong);
//		}
//	}
//}
//int main()
//{
//	cin >> k >> gealong >> geashuliang >> geblong >> gebshuliang;
//
//	if (gealong != geblong)
//	{
//		help(k);
//	}
//	cout << sum % 1000000007 << endl;
//}

//第二题 dp动态规划做
//对于这种拼接问题，问有多少种方式，可以用动态规划
//难点在于怎样构造二维数组，去抽象原始问题
//int main()
//{
//	int k, a, x, b, y;
//	cin >> k >> a >> x >> b >> y;
//	int dp[201][1001];
//	memset(dp,0,sizeof(int)*201*1001);//这一句很重要，否则初始化不正确会出错。
//	for (int i = 0; i < x + y + 1; ++i)
//		dp[i][0] = 1;
//	for (int i = 1; i < x + y + 1; ++i)
//	{
//		for (int j = 1; j <= k; ++j)
//		{
//			if (i <= x)
//			{
//				if (j >= a)
//					dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - a]) % 1000000007;
//				else
//					dp[i][j] = dp[i - 1][j] % 1000000007;
//			}
//			else if (i <= x + y)
//			{
//				if (j >= b)
//					dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - b]) % 1000000007;
//				else
//					dp[i][j] = dp[i - 1][j] % 1000000007;
//			}
//		}
//	}
//	cout << dp[x + y][k] << endl;
//}

//还可以用一位数组
//注意j是从后往前减的
//import java.util.Scanner;
//
//public class Question2b {
//	public static void main(String[] args) {
//		Scanner in = new Scanner(System.in);
//
//		int K = in.nextInt();
//		int A = in.nextInt();
//		int X = in.nextInt();
//		int B = in.nextInt();
//		int Y = in.nextInt();
//		int[] dp = new int[K + 1];
//
//		dp[0] = 1;
//
//		for (int i = 1; i < X + Y + 1; ++i) {
//			for (int j = K; j > 0; --j) {
//				if (i <= X)
//					dp[j] = ((j >= A) ? (dp[j] + dp[j - A]) : dp[j]) % 1000000007;
//				else if (i <= X + Y)
//					dp[j] = ((j >= B) ? (dp[j] + dp[j - B]) : dp[j]) % 1000000007;
//			}
//		}
//
//		System.out.println(dp[K]);
//		in.close();
//	}
//}

//注意这里的比较逻辑，从大到小排序
//其次比较不能用加减法
//bool cmp_my(const pair<int, int> &p1, const pair<int, int> &p2)
//{
//	if (p1.first == p2.first)
//		return p1.second > p2.second;
//	else
//		return p1.first > p2.first;
//}
//
//int main()
//{
//	int n, m, tempa, tempb;
//	cin >> n >> m;
//	vector<pair<int, int>> machine;
//	vector<pair<int, int>> task;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tempa >> tempb;
//		machine.push_back(make_pair(tempa, tempb));
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> tempa >> tempb;
//		task.push_back(make_pair(tempa, tempb));
//	}
//	int cnt[105];
//	memset(cnt, 0, sizeof(int) * 105);
//
//	sort(machine.begin(), machine.end(), cmp_my);
//	sort(task.begin(), task.end(), cmp_my);
//
//	long sum = 0;
//	int j = 0, cnt1 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		while (j < n && machine[j].first >= task[i].first)
//		{
//			cnt[machine[j].second]++;
//			j++;
//		}
//		for (int k = task[i].second; k < 101; k++)
//		{
//			if (cnt[k] != 0)
//			{
//				cnt[k]--;
//				cnt1++;
//				sum += 200 * task[i].first + 3 * task[i].second;
//				break;
//			}
//		}
//	}
//	cout << cnt1 << " " << sum << endl;
//}