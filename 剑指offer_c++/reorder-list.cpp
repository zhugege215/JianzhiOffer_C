struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr){}
};

class Solution
{
public:
	void reorderList(ListNode *head)
	{
		if (!head || !head->next) return;
		//快慢指针找中间点
		ListNode *p1 = head, *p2 = head->next;
		while (p2 && p2->next)
		{
			p1 = p1->next;
			p2 = p2->next->next;
		}
		
		//链表的逆序
		ListNode * head2 = p1->next;
		p1->next = nullptr;

		p2 = head2->next;
		head2->next = nullptr;
		while (p2)
		{
			p1 = p2->next;
			p2->next = head2;
			head2 = p2;
			p2 = p1;
		}

		//链表合并
		for (p1 = head, p2 = head2; p1; )
		{
			auto t = p1->next;
			p1->next = p2;
			p1 = p1->next;
			p2 = t;
		}
	}
};