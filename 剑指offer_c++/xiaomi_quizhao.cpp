#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <stdio.h>
#include <numeric>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <cmath>
#include <assert.h>
#include <vector>
#include <memory>
#include <memory.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
typedef unsigned char uchar;

//#define G_DEBUG

struct pairhash
{
public:
	template <typename T, typename U>
	std::size_t operator()(const std::pair<T, U> &x) const
	{
		return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
	}
};

bool bfs(vector<int> &nums, int idx, int curr, int goal)
{
	if (curr == goal)
		return true;
	if (idx >= nums.size() || curr > goal)
		return false;
	if (nums[idx] + curr > goal)
		return false;

	bool ret = bfs(nums, idx + 1, nums[idx] + curr, goal);
	if (!ret)
		ret = bfs(nums, idx + 1, curr, goal);
	return ret;
}

int main_t()
{
#ifdef G_DEBUG
	int N = 0;
	ifstream file("data.txt");
	file >> N;
	vector<int> nums(N, 0);
	for (int i = 0; i < N; i++)
		file >> nums[i];
	int goal = 0;
	file >> goal;
#else
	vector<string> strs(15);
	int N = 0;
	cin >> N;
	vector<int> nums(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}
	int goal = 0;
	cin >> goal;
#endif // G_DEBUG

	std::sort(nums.begin(), nums.end());
	int ret = bfs(nums, 0, 0, goal);
	cout << ret << endl;
	return 0;
}