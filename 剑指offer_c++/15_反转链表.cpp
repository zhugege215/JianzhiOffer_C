struct ListNode {
	int val;
	struct ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode * ReverseList(ListNode* pHead) {
		if (pHead == nullptr)
		{
			return nullptr;
		}
		ListNode* reverseHead = nullptr;
		ListNode* pre = nullptr;
		ListNode* temp= nullptr;
		ListNode* current = pHead;

		while (current != nullptr)
		{
			temp = current->next;
			if (temp == nullptr)
			{
				reverseHead = current;
			}
			current->next = pre;
			pre = current;
			current = temp;
		}
		return reverseHead;
	}
};