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

//1
//struct ListNode {
//	int val;
//	struct ListNode* next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//int main()
//{
//	int num;
//	int temp;
//	ListNode* pre = new ListNode(-1);
//	ListNode* p = pre;
//	ListNode* preHead = pre;
//	for (num = 1;; num++)
//	{
//		cin >> temp;
//		ListNode* pp = new ListNode(temp);
//		p->next = pp;
//		p = pp;
//		if (getchar() == '\n')
//			break;
//	}
//
//	int k;
//	cin >> k;
//
//	ListNode *cur = preHead, *nex;
//
//	while (num >= k) {
//		cur = pre->next;
//		nex = cur->next;
//		for (int i = 1; i<k; ++i) {
//			cur->next = nex->next;
//			nex->next = pre->next;
//			pre->next = nex;
//			nex = cur->next;
//		}
//		pre = cur;
//		num -= k;
//	}
//
//	preHead = preHead->next;
//	while (preHead != nullptr)
//	{
//		cout << preHead->val;
//		cout << " ";
//		preHead = preHead->next;
//	}
//	return 0;
//}



//3
//int main()
//{
//	int zongshu;
//	cin >> zongshu;
//	int query;
//	cin >> query;
//	set<int> set1, set2, seta;
//	for (int i = 0; i < query; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (seta.find(a) == seta.end() && seta.find(b) == seta.end())
//			set1.insert(a), set2.insert(b), seta.insert(a), seta.insert(b);
//		else if(seta.find(a) != seta.end() || seta.find(b) == seta.end())
//		{
//			if (set1.find(a) != set1.end())
//			{
//				if (set1.find(b) != set1.end())
//				{
//					cout << 0 << endl;
//					return 0;
//				}
//				else if (set2.find(b) == set2.end())
//				{
//					set2.insert(b);
//					seta.insert(b);
//				}
//			}
//			else if (set2.find(a) != set2.end())
//			{
//				if (set2.find(b) != set2.end())
//				{
//					cout << 0 << endl;
//					return 0;
//				}
//				else if (set1.find(b) == set1.end())
//				{
//					set1.insert(b);
//					seta.insert(b);
//				}
//			}
//			else if(set1.find(b) != set1.end())
//			{
//				if (set1.find(a) != set1.end())
//				{
//					cout << 0 << endl;
//					return 0;
//				}
//				else if (set2.find(a) == set2.end())
//				{
//					set2.insert(a);
//					seta.insert(a);
//				}
//			}
//			else if (set2.find(b) != set2.end())
//			{
//				if (set2.find(a) != set2.end())
//				{
//					cout << 0 << endl;
//					return 0;
//				}
//				else if (set1.find(a) == set1.end())
//				{
//					set1.insert(a);
//					seta.insert(a);
//				}
//			}
//		}
//	}
//
//	cout << 1 << endl;
//	return 0;
//}


//新浪，最长公共子序列LCS
//int main()
//{
//	string str1, str2;
//	cin >> str1 >> str2;
//	int size1 = str1.size();
//	int size2 = str2.size();
//	vector<vector<int>> dp(size1 + 1, vector<int>(size2 + 1));
//	for (int i = 0; i <= size1; i++)
//	{
//		for (int j = 0; j <= size2; j++)
//		{
//			if (i == 0 || j == 0)
//				dp[i][j] = 0;
//			else if (str1[i - 1] == str2[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//	cout << dp[size1][size2] << endl;
//
//	/*vector<int> dp(size2 + 1);
//	for (int i = 1; i <= size1; i++)
//	{
//		dp[0] = 0;
//		for (int j = 1; j <= size2; j++)
//		{
//			int pre = dp[0];
//			int temp = dp[i];
//
//			if (str1[i - 1] == str2[j - 1])
//				dp[i] = pre + 1;
//			else
//				dp[i] = max(dp[i - 1], dp[i]);
//			dp[0] = temp;
//		}
//	}
//	cout << dp[size2] << endl;*/
//	return 0;
//}