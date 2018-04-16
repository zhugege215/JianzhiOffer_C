#include <algorithm>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class Solution
{
public:
	
	int run(TreeNode* root)
	{
		if (root == nullptr)
			return 0;
		int left = run(root->left);
		int right = run(root->right);
		if (left == 0 || right == 0)
			return 1 + left + right;
		return 1 + min(left, right);
	}
};