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

bool panduan(string S, string T)
{
	map<char, char> mp;
	if (S.size() != T.size())
		return false;
	int i;
	for (i = 0; i < S.size(); i++)
	{
		if (mp.find(S[i]) != mp.end())
		{
			if (mp[S[i]] != T[i])
				return false;
		}
		else
		{
			mp[S[i]] = T[i];
		}
	}

	return true;
}

int solve(string S, string T) {

	int cnt = 0;
	for (int i = 0; i <= S.size() - T.size(); i++)
	{
		if (panduan(S.substr(i, T.size()), T))
			cnt++;
	}
	return cnt;
}