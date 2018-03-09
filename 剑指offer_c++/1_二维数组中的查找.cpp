#include <vector>
using namespace std;

//注意本题一定要从左下角或者右上角来开始找，因为如果是从左上角来找的话，右边和下边都比改数字大，就不知道该怎么移动了
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int rowCount = array.size();
		int colCount = array[0].size();
		int i, j;
		for (i = rowCount - 1, j = 0; i >= 0 && j < colCount;) {
			if (target == array[i][j])
			{
				return true;
			}
			if (target < array[i][j])
			{
				i--;
				continue;
			}
			if (target > array[i][j])
			{
				j++;
				continue;
			}
		}
		return false;
	}
};