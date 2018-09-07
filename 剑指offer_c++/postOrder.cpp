#include <stack>
#include <iostream>
using namespace std;

struct BinTree
{
	int val;
	struct BinTree  *left;
	struct BinTree  *right;
	BinTree(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
	void postOrder(BinTree *root)
	{
		stack<BinTree*> s;
		BinTree *cur;
		BinTree *pre = nullptr;
		s.push(root);
		while (!s.empty())
		{
			cur = s.top();
			if ((cur->left == nullptr && cur->right == nullptr) || (pre != nullptr && (pre == cur->left || pre == cur->right)))
			{
				cout << cur->val << " ";
				s.pop();
				pre = cur;
			}
			else
			{
				if (cur->right != nullptr)
					s.push(cur->right);
				if (cur->left != nullptr)
					s.push(cur->left);
			}
		}
	}
};



//Ç°Ðò
//public void preOrderTraverse2(TreeNode root) {
//	LinkedList<TreeNode> stack = new LinkedList<>();
//	TreeNode pNode = root;
//	while (pNode != null || !stack.isEmpty()) {
//		if (pNode != null) {
//			System.out.print(pNode.val + "  ");
//			stack.push(pNode);
//			pNode = pNode.left;
//		}
//		else { //pNode == null && !stack.isEmpty()  
//			TreeNode node = stack.pop();
//			pNode = node.right;
//		}
//	}
//}

//ÖÐÐò
//public void inOrderTraverse2(TreeNode root) {
//	LinkedList<TreeNode> stack = new LinkedList<>();
//	TreeNode pNode = root;
//	while (pNode != null || !stack.isEmpty()) {
//		if (pNode != null) {
//			stack.push(pNode);
//			pNode = pNode.left;
//		}
//		else { //pNode == null && !stack.isEmpty()  
//			TreeNode node = stack.pop();
//			System.out.print(node.val + "  ");
//			pNode = node.right;
//		}
//	}
//}