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

long long InversePairsCore(vector<int>& data, vector<int>& copy, int start, int end) {
	if (start == end)
	{
		copy[start] = data[start];
		return 0;
	}
	int length = (end - start) / 2;
	long long left = InversePairsCore(copy, data, start, start + length);
	long long right = InversePairsCore(copy, data, start + length + 1, end);

	int i = start + length;
	int j = end;
	int indexcopy = end;
	long long count = 0;
	while (i >= start && j >= start + length + 1)
	{
		if (data[i] > data[j])
		{
			copy[indexcopy--] = data[i--];
			count = count + j - (start + length + 1) + 1;
		}
		else
		{
			copy[indexcopy--] = data[j--];
		}
	}
	for (; i >= start; i--)
		copy[indexcopy--] = data[i];
	for (; j >= start + length + 1; j--)
		copy[indexcopy--] = data[j];
	return left + right + count;
}

int core(vector<int> arr, int idx)
{
	int cnt = 0;
	int tar = arr[idx];
	for (int i = 0; i<idx; i++) {
		if (arr[i] <= tar) {
			cnt++;
		}
	}
	for (int i = idx + 1; i<arr.size(); i++) {
		if (arr[i] < tar) {
			cnt--;
		}
	}
	return cnt;
}

//int main()
//{
//	int n, temp;
//	cin >> n;
//	vector<int> data;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		data.push_back(temp);
//	}
//
//	vector<int> copy;
//	for (int i = 0; i < n; i++)
//		copy.push_back(data[i]);
//	long long count = InversePairsCore(data, copy, 0, n - 1);
//
//	int min = INT_MAX;
//	int index = -1;
//	for (int i = 0; i<n; i++) {
//		int cnt = core(data, i);
//		if (min > cnt) {
//			index = i;
//			min = cnt;
//		}
//	}
//	int res = count + min;
//	index += 1;
//
//	cout << res << " " << index;
//	return 0;
//}