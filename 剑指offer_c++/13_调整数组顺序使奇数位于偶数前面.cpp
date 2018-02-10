#include <vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int>::iterator even = array.begin();
		int size = array.size();
		while (size)
		{
			if (*even % 2 == 0) {
				int temp = *even;
				even = array.erase(even);
				array.push_back(temp);
			}
			else
				even++;
			size--;
		}
	}
};