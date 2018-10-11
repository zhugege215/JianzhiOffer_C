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
#include <limits.h>
using namespace std;

//bool cmp(const int &p1, const int &p2)
//{
//	return p1> p2;
//}
//
//int main()
//{
//	long long n, k;
//	cin >> n >> k;
//	string str;
//	for (int i = 0; i < n; i++)
//	{
//		char ch;
//		ch = cin.get();
//		str += ch;
//	}
//	
//	map<char, int> mp;
//	vector<int> arr;
//	for (auto c : str)
//	{
//		if (mp.find(c) == mp.end())
//			mp[c] = 1;
//		else
//		{
//			mp[c] += 1;
//		}
//	}
//
//	for (map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it) 
//	{ 
//		arr.push_back(it->second); 
//	}   
//	sort(arr.begin(), arr.end(), cmp);
//
//	long long sum = 0;
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr[i] < k)
//		{
//			sum = sum + arr[i] * arr[i];
//			k = k - arr[i];
//		}
//		else if (arr[i] >= k)
//		{
//			sum = sum + k * k;
//			break;
//		}
//	}
//
//	cout << sum << endl;
//	
//	return 0;
//}

//int main()
//{
//	int k;
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		int n;
//		cin >> n;
//		vector<int> arr;
//		for (int j = 0; j < n; j++)
//		{
//			int temp;
//			cin >> temp;
//			arr.push_back(temp);
//		}
//		sort(arr.begin(), arr.end());
//		int c = unique(arr.begin(), arr.end()) - arr.begin();
//		if (c == 2)
//		{
//			cout << "YES" << endl;
//			continue;
//		}
//		/*unique(arr.begin(), arr.end());*/
//		if ((arr[2] - arr[1]) == (arr[1] - arr[0]))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}