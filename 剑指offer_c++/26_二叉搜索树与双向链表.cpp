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

	//ע�������preһ��Ҫ�����ã���Ϊ��ִ�������У�preҪ����ȥ��ǰһ�ε��á�
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