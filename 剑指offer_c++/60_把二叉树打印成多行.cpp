#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	vector<vector<int>> Print(TreeNode* pRoot) {
		vector<vector<int> > vec;
		if (pRoot == nullptr)
			return vec;
		queue<TreeNode*> q;
		q.push(pRoot);

		while (!q.empty())
		{
			int cur = 0, length = q.size();
			vector<int> c;
			while (cur++ < length)
			{
				TreeNode* temp = q.front();
				q.pop();
				c.push_back(temp->val);
				if (temp->left)
					q.push(temp->left);
				if (temp->right)
					q.push(temp->right);
			}
			vec.push_back(c);
		}

		return vec;
	}
};