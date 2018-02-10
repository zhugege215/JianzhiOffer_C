#include <vector>
#include <memory>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode * reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		TreeNode* root = reConstruct(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
		return root;
	}
private:
	TreeNode * reConstruct(vector<int> pre, int startPre, int endPre, vector<int> in, int startIn, int endIn) {
		if (startPre > endPre || startIn > endIn)
		{
			return NULL;
		}

		//此段程序代码的调用者必须手动释放掉root指针，即调用reConstructBinaryTree函数的main必须自己释放掉root.
		TreeNode *root = new TreeNode(pre[startPre]);
		//一下代码不通过。。。
		/*TreeNode temp(pre[startPre]);
		TreeNode* root = &temp;*/

		for (size_t i = startIn; i <= endIn; i++)
		{
			if (in[i] == pre[startPre])
			{
				root->left = reConstruct(pre, startPre + 1, i - startIn + startPre, in, startIn, i - 1);
				root->right = reConstruct(pre, i - startIn + startPre + 1, endPre, in, i + 1, endIn);
				break;
			}
		}

		return root;
	}
};