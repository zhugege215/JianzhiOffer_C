#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		if (root)
		{
			dfsFind(root, expectNumber);
		}
		return res;
	}
private:
	vector<vector<int> > res;
	vector<int> tmp;
	void dfsFind(TreeNode* node, int val) {
		tmp.push_back(node->val);
		if (val - node->val == 0 && !node->left && !node->left)
		{
			res.push_back(tmp);
		}
		else
		{
			if (node->left)
			{
				dfsFind(node->left, val - node->val);
			}
			if (node->right)
			{
				dfsFind(node->right, val - node->val);
			}
		}
		tmp.pop_back();
	}
};