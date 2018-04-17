#include <stack>
#include <vector>
#include <cctype>	//这里不能用isdigit，isdigit只能用于char
#include <sstream>
using namespace std;

class Solution {
public:
	int evalRPN(vector<string> &tokens) {
		stack<int> temp;
		for (auto token : tokens)
		{
			if (token == "+" || token == "-" || token == "*" || token == "/")
			{
				int res;
				int a = temp.top(); temp.pop();
				int b = temp.top(); temp.pop();
				if (token == "+")
					res = a + b;
				else if (token == "-")
					res = b -a;
				else if (token == "*")
					res = a * b;
				else if (token == "/")
					res = b/a;
				temp.push(res);
			}
			else
			{
				stringstream ss;
				ss << token;
				int aa;
				ss >> aa;
				temp.push(aa);
			}
		}
		return temp.top();
	}
};