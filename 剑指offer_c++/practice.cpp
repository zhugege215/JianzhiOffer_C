#include <vector>
#include <stack>
#include <stdexcept>
#include <algorithm>
#include <iostream>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x): val(x), next(nullptr){}
};

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

//1
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		if (!array.size())
//		{
//			return false;
//		}
//		
//		int row = array.size();
//		int col = array[0].size();
//		int i, j;
//
//		for (i = 0, j = row - 1; i < col && j >= 0;)
//		{
//			if (array[j][i] == target) {
//				return true;
//			}
//			if (array[j][i] > target) 
//			{
//				j--;
//				continue;
//			}
//			if (array[j][i] < target)
//			{
//				i++;
//				continue;
//			}
//		}
//		return false;
//	}
//};

//2
//class Solution {
//public:
//	void replaceSpace(char* str, int length) {
//		if (str == nullptr || length <0)
//		{
//			return;
//		}
//		int oldLength = 0, spaceLength = 0, newLength = 0, i = 0;
//		while (str[i] != '\0')
//		{
//			oldLength++;
//			if (str[i] == ' ')
//			{
//				spaceLength++;
//			}
//			i++;
//		}
//		newLength = oldLength + spaceLength * 2;
//		if (newLength > length)
//		{
//			return;
//		}
//		while (oldLength >= 0 && newLength > oldLength)
//		{
//			if (str[oldLength] == ' ')
//			{
//				str[newLength--] = '0';
//				str[newLength--] = '2';
//				str[newLength--] = '%';
//			}
//			else {
//				str[newLength--] = str[oldLength];
//			}
//			oldLength--;
//		}
//
//	}
//};

//3
//class Solution {
//public:
//	vector<int> list_reverse_recursion(ListNode* head) {
//		vector<int> res;
//		if (head != nullptr)
//		{
//			res.push_back(head->val);
//			vector<int> temp = list_reverse_recursion(head->next);
//			if (temp.size() > 0)
//			{
//				res.insert(res.begin(), temp.begin(), temp.end());
//			}
//			
//		}
//		return res;
//	}
//
//	vector<int> list_reverse_non_recursion(ListNode* head) {
//		vector<int> res;
//		while (head)
//		{
//			res.insert(res.begin(), head->val);
//			head = head->next;
//		}
//		return res;
//	}
//};

//4
//class Solution {
//public:
//	TreeNode * reCon(vector<int> pre, vector<int> vin) {
//		TreeNode * root = reConHelp(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
//		return root;
//	}
//private:
//	TreeNode * reConHelp(vector<int> pre, int preStart, int preEnd, vector<int> vin, int vinStart, int vinEnd) {
//		if (preStart > preEnd || vinStart > vinEnd)
//		{
//			return nullptr;
//		}
//		TreeNode* root = new TreeNode(pre[preStart]);
//		for (size_t i = vinStart; i <= vinEnd; i++)
//		{
//			if (vin[i] == pre[preStart])
//			{
//				root->left = reConHelp(pre, preStart + 1, preStart + i - vinStart, vin, vinStart, i - 1);
//				root->right = reConHelp(pre, preStart + i - vinStart + 1, preEnd, vin, i + 1, vinEnd);
//				break;
//			}
//		}
//		return root;
//	}
//};

//5
//class Solution {
//public:
//	void push(int node) {
//		stack1.push(node);
//	}
//
//	int pop() {
//		if (stack2.empty())
//		{
//			while (!stack1.empty()) {
//				stack2.push(stack1.top());
//				stack1.pop();
//			}
//		}
//		int a = stack2.top();
//		stack2.pop();
//		return a;
//	}
//private:
//	stack<int> stack1;
//	stack<int> stack2;
//};

//6
//class Solution {
//public:
//	int minNumberInRotateArray(vector<int> rotateArray) {
//		int size = rotateArray.size();
//		if (size == 0) return 0;
//		int left = 0, right = size - 1, mid = 0;
//		while (rotateArray[left] >= rotateArray[right])
//		{
//			if (right - left == 1) {
//				mid = right;
//				break;
//			}
//			if (rotateArray[left] == rotateArray[right])
//			{
//				for (int i = left; i < size; i++) {
//					if (rotateArray[i] != rotateArray[left])
//					{
//						left = i - 1;
//						break;
//					}
//				}
//				for (size_t i = right; i >= 0; i--)
//				{
//					if (rotateArray[right] != rotateArray[i]) {
//						right = i + 1;
//						break;
//					}
//				}
//			}
//			mid = (right + left) / 2;
//			if (rotateArray[mid] >= rotateArray[left]) {
//				left = mid;
//			}
//			else
//			{
//				right = mid;
//			}
//		}
//		return rotateArray[mid];
//	}
//};

//7
//class Solution {
//public:
//	int Fibonacci(int n) {
//		int a = 0, b = 1;
//		while (n--)
//		{
//			b = b + a;
//			a = b - a;
//		}
//		return a;
//	}
//};

//8
//class Solution {
//public:
//	int jumpFloor(int number) {
//		if (number == 1)
//			return 1;
//		else if (number == 2)
//			return 2;
//		else
//		{
//			return jumpFloor(number - 1) + jumpFloor(number - 2);
//		}
//	}
//};

//9
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number <= 0)
//		{
//			return -1;
//		}
//		else if (number == 1)
//		{
//			return 1;
//		}
//		else
//			return jumpFloorII(number - 1) * 2;
//	}
//};

//10
//class Solution {
//public:
//	int rectCover(int number) {
//		if (number < 1)
//		{
//			return -1;
//		}
//		else if (number == 1)
//		{
//			return 1;
//		}
//		else if (number == 2)
//		{
//			return 2;
//		}
//		else
//		{
//			return rectCover(number - 1) + rectCover(number - 2);
//		}
//	}
//};

//11
//class Solution {
//public:
//	int NumberOf1(int n) {
//		int count = 0;
//		while (n != 0)
//		{
//			n = (n - 1) & n;
//			count++;
//		}
//		return count;
//	}
//};

//12
//class Solution {
//public:
//	double Power(double base, int exponent) {
//		bool flag = true;
//		if (exponent < 0)
//		{
//			if (base == 0) {
//				throw runtime_error("xxx");
//			}
//			flag = false;
//			exponent = -exponent;
//		}
//		double res = 1, temp = 1;
//		while (exponent != 0)
//		{
//			if ((exponent & 1) == 1)
//			{
//				res *= base;
//			}
//			base *= base;
//			exponent >>= 1;
//		}
//		return flag ? res : 1 / res;
//	}
//};

//13
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		for (auto i = array.begin(); i < array.end(); i++)
//		{
//			for (auto j = array.end() - 1; j > i; j--) {
//				if (*j % 2 == 1 && *(j - 1) % 2 == 0)
//				{
//					swap(*j, *(j - 1));
//				}
//			}
//		}
//	}
//};

//14
class Solution {
public:
	ListNode * FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == nullptr || k <= 0) {
			return nullptr;
		}
		ListNode *p1, *p2;
		p2 = pListHead;
		p1 = pListHead;
		while (--k)
		{
			if (p2->next == nullptr)
			{
				return nullptr;
			}
			p2 = p2->next;
		}
		while (p2->next)
		{
			p2 = p2->next;
			p1 = p1->next;
		}
		return p1;
	}
};

//int main() {
//	Solution s;
//	vector<int> num = {2,4,6,1};
//
//	s.reOrderArray(num);
//	for (auto i = num.begin(); i != num.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	return 0;
//}