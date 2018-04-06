#include <algorithm>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//int main()
//{
//	string s;
//	getline(cin, s);
//
//}

//int main()
//{
//	string s;
//	int i, ans = 0;
//	int wcount = 0, ecount = 0;
//	int w_error = 0, e_error = 0;
//	cin >> s;
//	for (i = 0; i<s.size(); i++)
//	{
//		if (s[i] == 'W')
//			wcount++;
//		if (s[i] == 'E')
//			ecount++;
//	}
//	e_error = wcount;
//	ans = e_error;
//	for (i = 0; i<s.size(); i++)
//	{
//		if (s[i] == 'W')
//		{
//			e_error--;
//		}
//		if (s[i] == 'E')
//		{
//			w_error++;
//		}
//		if (e_error + w_error < ans)
//			ans = e_error + w_error;
//	}
//	cout << ans << endl;
//	return 0;
//}
typedef long long ll;

//int main()
//{
//	ll n1, n2;
//	cin >> n1;
//	string ans;
//	vector <ll> vec1(n1 + 1);
//	for (ll i = 0; i < n1 + 1; i++)
//	{
//		cin >> vec1[i];
//	}
//
//	cin >> n2;
//	vector <ll> vec2(n2 + 1);
//	for (ll i = 0; i < n2 + 1; i++)
//	{
//		cin >> vec2[i];
//	}
//	if (vec1[0] > vec2[0])
//	{
//		ans = '>';
//	}
//	else if(vec1[0] < vec2[0])
//	{
//		ans = '<';
//	}
//	else
//	{
//		int i = 1;
//		for ( ; i < min(n1, n2) + 1; i++)
//		{
//			if (vec1[i] > vec2[i])
//			{
//				ans = '<';
//				break;
//			}
//			else if (vec1[i] < vec2[i])
//			{
//				ans = '>';
//				break;
//			}
//		}
//		if (i == min(n1, n2) + 1)
//		{
//			if (i == (n1 + 1) && i != (n2 + 1))
//			{
//				ans = '>';
//			}
//			else if (i == (n2 + 1) && i != (n1 + 1))
//			{
//				ans = '<';
//			}
//			else
//			{
//				ans = '=';
//			}
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}