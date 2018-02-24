#include <vector>
using namespace std;

class Solution {
public:
	vector<int> multiply(const vector<int>& A) {
		vector <int> vec;
		int sz = A.size();
		if (sz == 0)
			return vec;
		vec.push_back(1);
		for (int i = 0; i < sz - 1; i++)
			vec.push_back(vec.back()*A[i]);
		int temp = 1;
		for (int i = sz - 1; i >= 0; i--) {
			vec[i] = vec[i] * temp;
			temp = temp * A[i];
		}
		return vec;
	}
};