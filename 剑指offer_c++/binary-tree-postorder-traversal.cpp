#include <vector>
#include <stack>
#include <iostream>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
	vector<int> postorderTraversal(TreeNode *root)
	{
		vector<int> ans;
		if (root == nullptr)
			return ans;
		TreeNode* pre = nullptr;
		stack<TreeNode*> st;
		st.push(root);
		while (st.size())
		{
			TreeNode* cur = st.top();
			if ((cur->left == nullptr && cur->right == nullptr) || (pre != nullptr && (pre == cur->left || pre == cur->right)))
			{
				ans.push_back(cur->val);
				st.pop();
				pre = cur;
			}
			else
			{
				if (cur->right)
					st.push(cur->right);
				if (cur->left)
					st.push(cur->left);
			}
		}
		return ans;
	}
};

