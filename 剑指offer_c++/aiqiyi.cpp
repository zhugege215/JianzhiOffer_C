//#include <set>
//#include <vector>
//#include <stack>
//#include <stdexcept>
//#include <algorithm>
//#include <iostream>
//#include <queue>
//#include <unordered_set>
//#include <functional>
//#include <string>
//#include <map>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n, m, p, temp;
//	cin >> n >> m >> p;
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		string s;
//		int t;
//		cin >> s;
//		cin >> t;
//		if (s == "A")
//			v[t - 1]++;
//		else
//		{
//			v[t - 1] --;
//		}
//	}
//
//	int ans = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (v[i] > v[p - 1])
//			ans++;
//	}
//
//	cout << ans << endl;
//	return 0;
//}



//第二题
//#include <iostream>  
//#include <algorithm>  
//using namespace std;
//struct s {
//	int a;
//	int b;
//} v[103];
//int cmp(s x, s y) {
//	return x.b < y.b;
//}
//int main() {
//	int n, ans = 0, tempa, tempb, temp;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tempa >> tempb;
//		if (tempa > tempb)
//		{
//			temp = tempa;
//			tempa = tempb;
//			tempb = temp;
//		}
//		v[i].a = tempa;
//		v[i].b = tempb;
//	}
//	sort(v, v + n, cmp);
//	int j = 0;
//	for (int i = 1; i < n; i++) {
//		if (v[i].a >= v[j].b) {
//			++ans;
//			j = i;
//		}
//	}
//	cout << ans + 1 << endl;
//	return 0;
//}




//#coding = utf - 8
//
//# 本题为考试多行输入输出规范示例，无需提交，不计分。
//import sys
//
//if __name__ == "__main__":
//# 读取第一行的n
//n = int(input())
//values = []
//for i in range(n) :
//	value = list(map(int, input().split()))
//	values.append(value)
//	values = sorted(values, key = lambda stu : stu[0])
//	#print(values)
//	dp = [1] * n
//	for i in range(1, n) :
//		for j in range(i) :
//			if values[i][0] >= values[j][1] :
//				dp[i] = max(dp[i], dp[j] + 1)
//				print(dp[-1])