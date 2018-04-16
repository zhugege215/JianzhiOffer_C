//说明
//输入n和k,求1到n的全排列的第k个.
//全排列为字典序，如n = 5
//1 2 3 4 5
//1 2 3 5 4
//1 2 4 3 5
//1 2 4 5 3
//1 3 2 4 5
//...

//利用回溯法

#include <vector>
using namespace std;

int k;
int n;
vector<int> func()
{
	vector<int> ans;
	vector<bool> flag(n + 1, true);
	dfs(ans, n, flag);
	return ans;
}

void dfs(vector<int> &ans, int left, vector<bool> flag) {
	if (left == 0)
	{
		if (k == 0)
			return;
		else
			k--;
	}
	for (int i = 1; i < n; i++)
	{
		if (flag[i])
		{
			ans.push_back(i);//这两步是回溯的进
			flag[i] = false;//这两步是回溯的进
			dfs(ans, left - 1, flag);
			flag[i] = true;//这两步是回溯的回
			ans.pop_back();//这两步是回溯的回
		}
	}
}