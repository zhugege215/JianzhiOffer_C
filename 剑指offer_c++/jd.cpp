#include <algorithm>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;
typedef long long ll;

//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		ll N;
//		cin >> N;
//		if (N % 2 != 0)
//			cout << "No" << endl;
//		else
//		{
//			for (ll y = 2; y <= N; y += 2)
//			{
//				if (N%y == 0)
//				{
//					ll x = N / y;
//					if (x % 2 == 1)
//					{
//						cout << x << " " << y << endl;
//						break;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//第二题 经典的子回文问题
//const int maxn = 50 + 5;
//ll dp[maxn][maxn];
//char s[maxn];
//int main() {
//	scanf("%s", s + 1);
//	int len = strlen(s + 1);
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <= len; i++) {
//		for (int l = 1; l + i - 1 <= len; l++) {
//			int r = l + i - 1;
//			dp[l][r] += dp[l + 1][r];
//			dp[l][r] += dp[l][r - 1];
//			if (s[l] == s[r]) dp[l][r] += 1;
//			else dp[l][r] -= dp[l + 1][r - 1];
//		}
//	}
//	printf("%lld\n", dp[1][len]);
//	return 0;
//}



//第三题下象棋
//ll dp[100005][10][10];
//int d[10][2] = { { 1, 2 },{ 1, -2 },{ -1, 2 },{ -1, -2 },{ 2, 1 },{ 2, -1 },{ -2, 1 },{ -2, -1 } };
//int main()
//{
//	int k, X, Y, tx, ty;
//	cin >> k >> X >> Y;
//	dp[0][0][0] = 1;
//	for (int i = 0; i < k; i++)
//	{
//		for (int x = 0; x <= 8; x++)
//		{
//			for (int y = 0; y <= 8; y++)
//			{
//				for (int j = 0; j < 8; j++)
//				{
//					tx = x + d[j][0];
//					ty = y + d[j][1];
//					if (0 <= tx && tx <= 8 && 0 <= ty && ty <= 8)
//						dp[i+1][tx][ty] = (dp[i+1][tx][ty] + dp[i][x][y]) % 1000000007;
//				}
//			}
//		}
//	}
//	cout << dp[k][X][Y] << endl;
//}