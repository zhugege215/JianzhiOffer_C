struct RandomListNode {
	int label;
	RandomListNode *next, *random;
	RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

class Solution
{
public:
	RandomListNode * copyRandomList(RandomListNode *head)
	{
		if (!head)
			return nullptr;
		RandomListNode* current = head;
		while (current)
		{
			RandomListNode* node = new RandomListNode(current->label);
			node->next = current->next;
			current->next = node;
			current = node->next;
		}
		current = head;
		while (current)
		{
			if (current->random)
				current->next->random = current->random->next;
			current = current->next->next;
		}
		RandomListNode *clone = head->next;
		current = head;
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