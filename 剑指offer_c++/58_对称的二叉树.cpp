struct TreeNode {
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	bool isSymmetrical(TreeNode* pRoot) {
		if (pRoot == nullptr)
			return true;
		return core(pRoot->left, pRoot->right);
	}

private:
	bool core(TreeNode *left, TreeNode *right) {
		if (left == nullptr)
			return right == nullptr;
		if (right == nullptr)
			return false;
		if (left->val != right->val)
			return false;
		return core(left->left, right->right) && core(left->right, right->left);
	}
};