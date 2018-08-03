//#include<stdio.h>
//int n, m, dp[10005][10005];
//int main()
//{
//	while (~scanf("%d%d", &n, &m))
//	{
//		dp[0][0] = 0;
//		for (int i = 1; i <= n; i++)
//			dp[i][0] = 1;
//		for (int j = 1; j <= m; j++)
//			dp[0][j] = 1;//初始化
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//			{
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];//动态规划转移方程
//			}
//		printf("%d\n", dp[n][m]);
//	}
//	return 0;
//}