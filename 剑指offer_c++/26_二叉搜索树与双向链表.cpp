struct TreeNode{
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class Solution {
public:
	TreeNode * Convert(TreeNode* pRootOfTree) {
		if (pRootOfTree == nullptr) return nullptr;
		TreeNode* pre = nullptr;

		conver_recursion(pRootOfTree, pre);

		TreeNode* res = pRootOfTree;
		while (res->left)
		{
			res = res->left;
		}
		return res;
	}

	//注意这里的pre一定要传引用，因为在执行流程中，pre要返回去给前一次调用。
	void conver_recursion(TreeNode* cur, TreeNode*& pre) {
		if (cur == nullptr) return;
		conver_recursion(cur->left, pre);
		cur->left = pre;
		if (pre)
			pre->right = cur;
		pre = cur;
		conver_recursion(cur->right, pre);
	}
};