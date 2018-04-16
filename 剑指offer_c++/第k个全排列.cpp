//˵��
//����n��k,��1��n��ȫ���еĵ�k��.
//ȫ����Ϊ�ֵ�����n = 5
//1 2 3 4 5
//1 2 3 5 4
//1 2 4 3 5
//1 2 4 5 3
//1 3 2 4 5
//...

//���û��ݷ�

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
			ans.push_back(i);//�������ǻ��ݵĽ�
			flag[i] = false;//�������ǻ��ݵĽ�
			dfs(ans, left - 1, flag);
			flag[i] = true;//�������ǻ��ݵĻ�
			ans.pop_back();//�������ǻ��ݵĻ�
		}
	}
}