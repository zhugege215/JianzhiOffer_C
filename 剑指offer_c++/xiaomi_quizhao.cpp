#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <math.h>
using namespace std;

bool miHomeGiftBag(vector < int > p, int M) {

	sort(p.begin(), p.end());
	set<long long> ans;
	ans.insert(0);
	for (int i = 0; i < p.size(); i++)
	{
		ans.insert(*ans.rbegin() + p[i]);
	}
	if (ans.find(M) != ans.end())
		return 1;
	else
	{
		return 0;
	}
}