#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {

	}
};

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> value;
		if (head != NULL)
		{
			value.insert(value.begin(), head->val);
			if (head->next != NULL)
			{
				vector<int> temp_vector = printListFromTailToHead(head->next);
				if (temp_vector.size()>0)
				{
					value.insert(value.begin(), temp_vector.begin(), temp_vector.end());
				}
			}
		}
		return value;
	}
};