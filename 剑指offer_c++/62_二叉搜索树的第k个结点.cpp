struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(nullptr), right(nullptr) {
	}
};

class Solution {
	int count = 0;
public:
	TreeNode * KthNode(TreeNode* pRoot, int k)
	{
		if (pRoot)
		{
			TreeNode *ret = KthNode(pRoot->left, k);
			if (ret) return ret;
			if (++count == k) return pRoot;
			ret = KthNode(pRoot->right, k);
			if (ret) return ret;
		}
		return nullptr;
	}
};