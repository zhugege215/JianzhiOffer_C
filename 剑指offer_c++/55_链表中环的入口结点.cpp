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

class Solution2
{
public:
	ListNode * EntryNodeOfLoop(ListNode* pHead)
	{
		if (pHead == nullptr || pHead->next == nullptr)
			return nullptr;
		ListNode *p1 = pHead;
		ListNode *p2 = pHead;
		while (p2 != nullptr && p2->next != nullptr)
		{
			p1 = p1->next;
			p2 = p2->next->next;
			if (p1 == p2)
			{
				p2 = pHead;
				while (p1 != p2)
				{
					p1 = p1->next;
					p2 = p2->next;
				}
				if (p1 == p2)
					return p1;
			}
		}
		return nullptr;
	}
};