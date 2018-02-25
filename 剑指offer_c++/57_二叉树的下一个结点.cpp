struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x): val(x), left(nullptr), right(nullptr), next(nullptr) {}
};

class Solution {
public:
	TreeLinkNode * GetNext(TreeLinkNode* pNode) {
		if (pNode == nullptr)
			return nullptr;

		if (pNode->right != nullptr) {
			pNode = pNode->right;
			while (pNode->left != nullptr)
			{
				pNode = pNode->left;
			}
			return pNode;
		}

		while (pNode->next != nullptr)
		{
			TreeLinkNode *pRoot = pNode->next;
			if (pRoot->left == pNode)
				return pRoot;
			pNode = pNode->next;
		}
		return nullptr;
	}
};