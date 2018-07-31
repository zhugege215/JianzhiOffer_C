//https://blog.csdn.net/liuyi1207164339/article/details/50898902

struct treeNode
{
	int val;
	struct treeNode* left;
	struct treeNode* right;
	treeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

int maxdistance(treeNode *pNode, int &maxdis)
{
	if (pNode == nullptr)
		return -1;
	int leftdepth = maxdistance(pNode->left, maxdis) + 1;
	int rightdepth = maxdistance(pNode->right, maxdis) + 1;
	int tempdis = leftdepth + rightdepth;
	maxdis = maxdis > tempdis ? maxdis : tempdis;
	return leftdepth > rightdepth ? leftdepth : rightdepth;
}