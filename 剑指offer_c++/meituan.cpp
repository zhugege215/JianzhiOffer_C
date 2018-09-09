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
//	int num[100010];
//	int n;
//	int k;
//	cin >> n >> k;
//
//	vector<int> ins;
//	for(int i = 0; i<n;i++)
//	{
//		int temp;
//		cin >> temp;
//		ins.push_back(temp);
//	}
//	int index = 0;
//	num[index++] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (ins[i] == 0)
//			num[index++] = i + 1;
//	}
//	if ((index - 1) <= k)
//		cout << n << endl;
//	else
//	{
//		int len = -1;
//		num[index++] = n + 1;
//		for (int i = k + 1; i < index; i++)
//			len = max(num[i] - num[i - k - 1] - 1, len);
//		cout << len << endl;
//	}
//	return 0;
//}




//using namespace std;
//int lst[100005];
//int main() {
//	int n;
//	while (cin >> n) {
//		memset(lst, 0, sizeof(lst));
//		for (int i = 0; i<n - 1; i++) {
//			int a, b;
//			cin >> a >> b;
//			lst[b] = lst[a] + 1;//当前节点的深度
//		}
//		int depth = 0;
//		for (int i = 1; i <= n; i++)
//			depth = lst[i]>depth ? lst[i] : depth;//找到最大值
//		cout << 2 * n - 2 - depth << endl;
//	}
//	return 0;
//}
