struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x): val(x),next(nullptr){}
};

class Solution
{
public:
	ListNode * detectCycle(ListNode *head)
	{
		if (head == nullptr || head->next == nullptr)
			return nullptr;
		ListNode *p1 = head;
		ListNode *p2 = head;
		while (p2 != nullptr && p2->next != nullptr)
		{
			p1 = p1->next;
			p2 = p2->next->next;
			if (p1 == p2)
			{
				p2 = head;
				while (p2!=p1)
				{
					p2 = p2->next;
					p1 = p1->next;
				}
				if (p2 == p1)
					return p1;
			}
		}
		return nullptr;
	}
};