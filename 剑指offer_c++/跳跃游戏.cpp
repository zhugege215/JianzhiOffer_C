#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool canJump(vector<int> &A)
	{
		if (A.size() == 1)
		{
			return true;
		}
		int n = A.size();
		vector<int> dp(n);
		dp[0] = A[0];
		for (int i = 1; i < n; ++i)
		{
			if (dp[i-1] >= i)
			{
				dp[i] = max(dp[i - 1], A[i] + i);
			}
			else
			{
				dp[i] = 0;
			}
		}
		return dp[n - 1] >= n - 1;
	}

	bool canJump2(vector<int> &A)
	{
		if (A.size() == 1)
			return true;
		int n = A.size();
		int ans = A[0];
		for (int i = 1; i < n; i++)
		{
			if (i > ans)
				return false;
			ans = max(A[i] + i, ans);
			if (ans >= n - 1) return true;
		}
		return ans >= n - 1;
	}

	int jumpMinNum(vector<int> &A)
	{
		int n = A.size();
		vector<int> dp(n, n);
		dp[0] = 0;
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (j + A[j] >= i)
					dp[i] = min(dp[i], dp[j] + 1);
			}
		}
		return dp[n - 1];
	}

	int jumpMinNum2(vector<int> &A)
	{
		int n = A.size();
		int jumps = 0;
		int curEnd = 0;
		int curFarthest = 0;
		for (int i = 0; i < n; i++)
		{
			curFarthest = max(curFarthest, A[i] + i);
			if (i == curEnd)
			{
				jumps++;
				curEnd = curFarthest;
				if (curFarthest >= n - 1)
					return jumps;
			}
		}
		return curFarthest >= n - 1 ? jumps : -1;
	}
};