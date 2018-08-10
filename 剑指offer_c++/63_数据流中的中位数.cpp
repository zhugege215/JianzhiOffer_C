#include <queue>
#include <functional>
#include <vector>
using namespace std;

class Solution {
	priority_queue<int, vector<int>, less<int>> qianmian;	//大顶堆
	priority_queue<int, vector<int>, greater<int>> houmian;	//小顶堆

public:
	void Insert(int num) {
		if (qianmian.empty() || num <= qianmian.top())
			qianmian.push(num);
		else
			houmian.push(num);
		if (qianmian.size() + 1 == houmian.size()) {
			qianmian.push(houmian.top());
			houmian.pop();
		}
		if (qianmian.size() == houmian.size() + 2) {
			houmian.push(qianmian.top());
			qianmian.pop();
		}
	}

	double GetMedian() {
		// 注意这里要填2.0，填2会报错不通过
		return qianmian.size() > houmian.size() ? qianmian.top() : (qianmian.top() + houmian.top()) / 2.0;
	}
};