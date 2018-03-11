//考察深入理解栈这种数据结构
//以及C++的stack这一容器适配器的操作

#include <stack>
using namespace std;

class Solution {
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		int a;
		if (stack2.empty())
		{
			while (!stack1.empty()) {
				a = stack1.top();
				stack2.push(a);
				stack1.pop();
			}
		}
		a = stack2.top();
		stack2.pop();
		return a;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};