#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int trap(vector<int>& height) {
		int n = height.size();
		int a = 0;
		int b = n - 1;
		int ans = 0;
		int leftmax = 0;
		int rightmax = 0;
		while (a <= b)
		{
			leftmax = max(height[a], leftmax);
			rightmax = max(height[b], rightmax);
			if (leftmax < rightmax)
			{
				ans += leftmax - height[a];
				a++;
			}
			else
			{
				ans += rightmax - height[b];
				b--;
			}
		}
		return ans;
	}
};