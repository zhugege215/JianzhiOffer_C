#include <vector>
using namespace std;

class Solution {
public:
	int GetNumberOfK(vector<int> data, int k) {
		int length = data.size();
		if (length == 0)
			return 0;
		int firstK = getFirstK(data, k, 0, length - 1);
		int lastK = getLastK(data, k, 0, length - 1);
		if (firstK != -1 && lastK != -1)
			return lastK - firstK + 1;
		return 0;
	}

	// recursion
	int getFirstK(vector<int> data, int k, int start, int end) {
		if (start > end)
			return -1;
		int mid = (start + end) / 2;
		if (data[mid] > k)
			return getFirstK(data, k, start, mid - 1);
		else if (data[mid] < k)
			return getFirstK(data, k, mid + 1, end);
		else if (mid - 1 >= 0 && data[mid - 1] == k)
			return getFirstK(data, k, start, mid - 1);
		else
			return mid;
	}

	// loop
	int getLastK(vector<int> data, int k, int start, int end) {
		int mid = (start + end) / 2;
		while (start <= end)
		{
			if (data[mid] <= k)
				start = mid + 1;
			else
				end = mid - 1;
			mid = (start + end) / 2;
		}
		return end;
	}
};