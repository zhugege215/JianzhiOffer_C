//千万要注意，这里的计数值不能用size_t类型，因为size_t是无符号类型，而这里的i--操作很有可能使i为负值，故应该选用int

#include <vector>
using namespace std;

class Solution {
public:
	vector<int> printMatrix(vector<vector<int> > matrix) {
		vector<int> res;
		res.clear();
		int row = matrix.size();
		int column = matrix[0].size();
		if (row == 0 || column == 0)
		{
			return res;
		}

		int left = 0, top = 0, right = column - 1, bottom = row - 1;
		while (left <= right && top <= bottom)
		{
			/*for (size_t i = left; i <= right; i++) {
				res.push_back(matrix[top][i]);
			}*/
			for (int i = left; i <= right; i++) {
			res.push_back(matrix[top][i]);
			}
			for (int i = top + 1; i <= bottom; i++)
			{
				res.push_back(matrix[i][right]);
			}
			if (top != bottom)
			{
				for (int i = right - 1; i >= left; i--) {
					res.push_back(matrix[bottom][i]);
				}
			}
			if (left != right)
			{
				for (int i = bottom - 1; i > top; i--) {
					res.push_back(matrix[i][left]);
				}
			}

			left++; top++; right--; bottom--;
		}
		return res;
	}
};