#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
		vector<int> res;
		deque<int> s;
		for (size_t i = 0; i < num.size(); i++) {
			while (s.size() && num[s.back()] <= num[i])
				s.pop_back();
			while (s.size() && (i - s.front() + 1) > size)
				s.pop_front();
			s.push_back(i);
			if (size && i + 1 >= size)
				res.push_back(num[s.front()]);
		}
		return res;
	}
};