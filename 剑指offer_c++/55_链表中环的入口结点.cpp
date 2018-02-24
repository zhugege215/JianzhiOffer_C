struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode * EntryNodeOfLoop(ListNode* pHead) {
		if (!pHead->next)
			return nullptr;
		ListNode* previous = pHead;
		ListNode* front = pHead->next;
		while (front)
		{
			previous->next = nullptr;
			previous = front;
			front = front->next;
		}
		return previous;
	}
};