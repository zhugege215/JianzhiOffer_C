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

//void SplitString(const string& s, vector<string>& v, const string& c)
//{
//	string::size_type pos1, pos2;
//	pos2 = s.find(c);
//	pos1 = 0;
//	while (string::npos != pos2)
//	{
//		v.push_back(s.substr(pos1, pos2 - pos1));
//		pos1 = pos2 + c.size();
//		pos2 = s.find(c, pos1);
//	}
//	if (pos1 != s.length())
//		v.push_back(s.substr(pos1));
//}
//
//int main()
//{
//	string in1, in2;
//	getline(cin, in1);
//	vector<string> fenzu;
//	SplitString(in1, fenzu, ";");
//	map<string, vector<string>> mp;
//	for (int i = 0; i < fenzu.size(); i++)
//	{
//		vector<string> xiaofenzu;
//		string::size_type pos = fenzu[i].find("_");
//		string key = fenzu[i].substr(0, pos);
//		string val = fenzu[i].substr(pos + 1);
//		SplitString(val, xiaofenzu, "|");
//		mp[key] = xiaofenzu;
//	}
//
//	map<string, vector<string>>::iterator it;
//	it = mp.begin();
//	vector<int> weizhi;
//	vector<string> key;
//	for (it = mp.begin(); it != mp.end(); it++)
//	{
//		for (auto &str : it->second)
//		{
//			if (in2.find(str) != string::npos)
//			{
//
//			}
//		}
//	}
//}