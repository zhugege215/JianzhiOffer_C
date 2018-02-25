#include <vector>
#include <stack>
#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	vector<vector<int> > Print(TreeNode* pRoot) {
		int layer = 1;
		stack<TreeNode*> s1;	//odd
		s1.push(pRoot);

		stack<TreeNode*> s2;	//even

		vector<vector<int> > res;
		vector<int> temp;
		temp.clear();

		while (!s1.empty() || !s2.empty())
		{
			if (layer % 2 != 0)
			{
				while (!s1.empty())
				{
					if (s1.top() != nullptr)
					{
						temp.push_back(s1.top()->val);
						cout << s1.top()->val << " ";
						s2.push(s1.top()->left);
						s2.push(s1.top()->right);
					}
					s1.pop();
				}
				if (!temp.empty())
				{
					res.push_back(temp);
					layer++;
					cout << endl;
					temp.clear();
				}
			}
			else
			{
				while (!s2.empty())
				{
					if (s2.top() != nullptr)
					{
						temp.push_back(s2.top()->val);
						cout << s2.top()->val << " ";
						s1.push(s2.top()->right);
						s1.push(s2.top()->left);
					}
					s2.pop();
				}
				if (!temp.empty())
				{
					res.push_back(temp);
					layer++;
					cout << endl;
					temp.clear();
				}
			}
		}
		return res;
	}
};