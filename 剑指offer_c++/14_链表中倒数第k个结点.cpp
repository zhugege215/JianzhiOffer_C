//这道题一定要有完整性判断
//即，记得判断链表头是否为空或k是否为非正数
#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

class Solution {
public:
	ListNode * FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == NULL || k <= 0)
		{
			return NULL;
		}
		
		ListNode* pre = pListHead;
		ListNode* last = pListHead;
		for (size_t i = 1; i < k; i++)
		{
			if (pre->next != NULL) {
				pre = pre->next;
			}
			else
			{
				return NULL;
			}
		}
		while (pre->next != NULL)
		{
			pre = pre->next;
			last = last->next;
		}
		return last;
	}
};