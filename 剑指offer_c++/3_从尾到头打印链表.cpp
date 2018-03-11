//此题有递归与非递归两种解法
//递归解法考察递归
//非递归考察C++容器的灵活使用

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