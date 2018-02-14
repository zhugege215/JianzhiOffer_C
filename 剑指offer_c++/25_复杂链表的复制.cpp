struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x): label(x), next(nullptr), random(nullptr){}
};

class Solution {
public:
	RandomListNode * Clone(RandomListNode* pHead) {
		if (!pHead) return nullptr;
		RandomListNode* current = pHead;
		while (current)
		{
			RandomListNode* node = new RandomListNode(current->label);
			node->next = current->next;
			current->next = node;
			current = node->next;
		}
		current = pHead;
		while (current) {
			if (current->random)
			{
				current->next->random = current->random->next;
			}
			current = current->next->next;
		}
		RandomListNode* clone = pHead->next;
		current = pHead;
		RandomListNode* temp;
		while (current->next)
		{
			temp = current->next;
			current->next = temp->next;
			current = temp;
		}
		return clone;
	}
};