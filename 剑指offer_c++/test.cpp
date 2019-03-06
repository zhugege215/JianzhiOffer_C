#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <unordered_map>
using namespace std;

//int main() {
//	int a = 5, b = 3, c = 0;
//	c = a / b;
//	cout << c << endl;	//´ð°¸Îª 1
//	return 0;
//}

//int main()
//{
//	string str;
//	while (getline(cin, str)) {
//		cout << str << endl;
//	}
//	return 0;
//}

//void main() {
//	string s("12345abcdefg");
//	string a = s.substr(0, 4);
//	cout << a << endl;
//}

//void main() {
//	int *a;
//	int c = 65;	//A
//	a = &c;
//	cout << (char*)a << endl;
//}

//int main() {
//	deque<int> s;
//	int a = s.back();
//	cout << a << endl;
//	return 0;
//}


//bool cmp_my(const pair<int, int> &p1, const pair<int, int> &p2)
//{
//	if (p1.first == p2.first)
//		return p1.second > p2.second;
//	else
//		return p1.first > p2.first;
//}
//int main()
//{
//	vector<pair<int, int>> machine;
//	int n, m, tempa, tempb;
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> tempa >> tempb;
//		machine.push_back(make_pair(tempa, tempb));
//	}
//	sort(machine.begin(), machine.end(), cmp_my);
//	for (auto a: machine)
//	{
//		cout << a.first << " " << a.second << endl;
//	}
//}


//bool cmp(pair<string, int> &a, pair<string, int> &b)
//{
//	return a.first.size() > b.first.size();
//}
//
//int main()
//{
//	vector<string> strs = { "abc", "asdf", "asdfsd" };
//	unordered_map<string, int> m;
//	for (int i = 0; i < strs.size(); i++)
//		++m[strs[i]];
//	vector<pair<string, int>> v;
//	for (auto it = m.begin(); it != m.end(); it++)
//	{
//		v.push_back(*it);
//	}
//	sort(v.begin(), v.end(), cmp);
//	//sort(v.begin(), v.end());
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << it->first << endl;
//	}
//	return 0;
//}