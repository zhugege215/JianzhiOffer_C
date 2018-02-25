struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode * deleteDuplication(ListNode* pHead) {
		if (pHead == nullptr)
			return nullptr;
		if (pHead != nullptr && pHead->next == nullptr)
			return pHead;

		ListNode* current;

		if (pHead->next->val == pHead->val)
		{
			current = pHead->next->next;
			while (current != nullptr && current->val == pHead->val)
			{
				current = current->next;
			}
			return deleteDuplication(current);
		}
		else
		{
			current = pHead->next;
			pHead->next = deleteDuplication(current);
			return pHead;
		}
	}
};