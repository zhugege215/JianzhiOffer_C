#include <algorithm>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <stdio.h>

using namespace std;

//int shan_gu()
//{
//	vector<int> A;
//	/*int temp = 0;
//	while (cin >> temp)
//	{
//		A.push_back(temp);
//	}*/
//
//	char s;
//	int a[10000000];
//	scanf("%c", &s);
//	int k = 0;
//	while (s != ']')
//	{
//		scanf("%d", &a[k++]);
//		scanf("%c", &s);
//	}
//
//	/*char c;
//	while ((c = getchar()) != EOF) {
//		if (isdigit(c)) a[++n] = c - '0';
//	}*/
//
//
//	if (A.size() < 3)
//		return 0;
//	int res = 0, xia = 0, shang = 0;
//	for (int i = 1; i < A.size(); ++i) {
//		if (shang > 0 && A[i - 1] > A[i] || A[i - 1] == A[i])
//			xia = shang = 0;
//		if (A[i - 1] < A[i])
//			shang++;
//		if (A[i - 1] > A[i])
//			xia++;
//		if (xia > 0 && shang > 0 && xia + shang + 1 > res)
//			res = xia + shang + 1;
//	}
//	cout << res << endl;
//}
//
//string gouzaofifuchuan()
//{
//	string str;
//	getline(cin, str);
//
//
//}