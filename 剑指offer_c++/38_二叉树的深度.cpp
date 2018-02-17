#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	int TreeDepth(TreeNode *root) {
		if (root == nullptr)
			return 0;
		int left = TreeDepth(root->left);
		int right = TreeDepth(root->right);
		return max(left + 1, right + 1);
	}
};