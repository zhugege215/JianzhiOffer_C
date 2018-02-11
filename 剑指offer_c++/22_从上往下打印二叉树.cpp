#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		queue<TreeNode*> temp;
		vector<int> res;
		temp.push(root);
		while (!temp.empty())
		{
			TreeNode* rt = temp.front();
			temp.pop();
			if (!rt)
			{
				continue;
			}
			res.push_back(rt->val);
			temp.push(rt->left);
			temp.push(rt->right);
		}
		return res;
	}
};