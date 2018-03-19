//�������Ҫע��  ��������ջ��ͬ��

#include <stack>
using namespace std;

class Solution {
public:
	void push(int value) {
		dataStack.push(value);
		if (minStack.empty())
		{
			minStack.push(value);
		}
		else
		{
			int min = minStack.top();
			value < min ? minStack.push(value) : minStack.push(min);
		}
	}
	void pop() {
		dataStack.pop();
		minStack.pop();
	}
	int top() {
		return dataStack.top();
	}
	int min() {
		return minStack.top();
	}
private:
	stack<int> dataStack, minStack;
};