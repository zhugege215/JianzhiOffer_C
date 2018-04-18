struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
	ListNode * sortList(ListNode *head)
	{
		if (!head || !head->next) return head;
		ListNode* p = head, *q = head->next;
		while (q && q->next)
		{
			p = p->next;
			q = q->next->next;
		}

		ListNode* right = sortList(p->next);
		p->next = nullptr;
		ListNode* left = sortList(head);
		return merge(left, right);
	}

	ListNode* merge(ListNode *left, ListNode *right)
	{
		ListNode ans(0);
		ListNode* p = &ans;
		while (left && right)
		{
			if (left->val < right->val)
			{
				p->next = left;
				left = left->next;
			}
			else
			{
				p->next = right;
				right = right->next;
			}
			p = p->next;
		}
		if (left) p->next = left;
		if (right) p->next = right;
		return ans.next;
	}
};