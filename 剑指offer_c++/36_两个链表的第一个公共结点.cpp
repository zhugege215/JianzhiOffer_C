struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode * FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		int len1 = findListLength(pHead1);
		int len2 = findListLength(pHead2);
		if (len1 > len2)
		{
			pHead1 = walkStep(pHead1, len1 - len2);
		}
		else
		{
			pHead2 = walkStep(pHead2, len2 - len1);
		}
		while (pHead1)
		{
			if (pHead1 == pHead2)
				return pHead1;
			pHead1 = pHead1->next;
			pHead2 = pHead2->next;
		}
		return nullptr;
	}

	int findListLength(ListNode* p) {
		if (p == nullptr) return 0;
		int sum = 1;
		while (p->next) {
			sum++;
			p = p->next;
		}
		return sum;
	}

	ListNode* walkStep(ListNode* p, int step) {
		while (step--)
		{
			p = p->next;
		}
		return p;
	}
};