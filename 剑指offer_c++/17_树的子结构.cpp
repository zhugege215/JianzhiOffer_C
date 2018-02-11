struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
		if (pRoot1 == nullptr || pRoot2 == nullptr)
		{
			return false;
		}
		return IsSubtree(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
	}
private:
	bool IsSubtree(TreeNode* p1, TreeNode* p2) {
		if (p2 == nullptr)
		{
			return true;
		}
		if (p1 == nullptr)
		{
			return false;
		}
		if (p1->val == p2->val)
		{
			return IsSubtree(p1->left, p2->left) && IsSubtree(p1->right, p2->right);
		}
		else
			return false;
	}
};