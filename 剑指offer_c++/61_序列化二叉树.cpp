#include <string>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution {
public:
	char* Serialize(TreeNode *root) {
		if (root == nullptr)
			return nullptr;
		string str;
		Serialize(root, str);
		char* ret = new char[str.length() + 1];
		size_t i;
		for (i = 0; i < str.length(); i++)
		{
			ret[i] = str[i];
		}
		ret[i] = '\0';
		return ret;
	}

	TreeNode* Deserialize(char *str) {
		if (str == nullptr)
			return nullptr;
		TreeNode *ret = Deserialize(&str);
		return ret;
	}

private:
	void Serialize(TreeNode* root, string& str) {
		if (root == nullptr)
		{
			str += '#';
			return;
		}
		string r = to_string(root->val);
		str += r;
		str += ',';
		Serialize(root->left, str);
		Serialize(root->right, str);
	}

	TreeNode* Deserialize(char **str) {
		if (**str == '#')
		{
			++(*str);
			return nullptr;
		}
		int num = 0;
		while (**str != '\0' && **str != ',')
		{
			num = num * 10 + ((**str) - '0');
			++(*str);
		}
		TreeNode *root = new TreeNode(num);
		if (**str == '\0')
			return root;
		else
			(*str)++;
		root->left = Deserialize(str);
		root->right = Deserialize(str);
		return root;
	}
};