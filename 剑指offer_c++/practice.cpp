#include <set>
#include <vector>
#include <stack>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_set>
#include <functional>
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

struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :
		label(x), next(NULL), random(NULL) {
	}
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
//class Solution {
//public:
//	ListNode * FindKthToTail(ListNode* pListHead, unsigned int k) {
//		if (pListHead == nullptr || k <= 0) {
//			return nullptr;
//		}
//		ListNode *p1, *p2;
//		p2 = pListHead;
//		p1 = pListHead;
//		while (--k)
//		{
//			if (p2->next == nullptr)
//			{
//				return nullptr;
//			}
//			p2 = p2->next;
//		}
//		while (p2->next)
//		{
//			p2 = p2->next;
//			p1 = p1->next;
//		}
//		return p1;
//	}
//};

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

//15
//class Solution {
//public:
//	ListNode * ReverseList(ListNode* pHead) {
//		if (pHead == nullptr)
//		{
//			return nullptr;
//		}
//		ListNode* pre = nullptr;
//		ListNode* current = pHead;
//		ListNode* ne = nullptr;
//		
//		while (current->next)
//		{
//			ne = current->next;
//			current->next = pre;
//			pre = current;
//			current = ne;
//		}
//		current->next = pre;
//		return current;
//	}
//};

//16
//class Solution {
//public:
//	ListNode * Merge(ListNode* pHead1, ListNode* pHead2) {
//		if (pHead1 == nullptr)
//		{
//			return pHead2;
//		}
//		if (pHead2 == nullptr)
//		{
//			return pHead1;
//		}
//		if (pHead1->val > pHead2->val)
//		{
//			pHead2->next = Merge(pHead1, pHead2->next);
//			return pHead2;
//		}
//		else
//		{
//			pHead1->next = Merge(pHead1->next, pHead2);
//			return pHead1;
//		}
//	}
//};

//17
//class Solution {
//public:
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
//		if (pRoot2 == nullptr || pRoot1 == nullptr)
//		{
//			return false;
//		}
//		
//		return IsSubtree(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
//	}
//
//	bool IsSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
//		if (pRoot2 == nullptr)
//		{
//			return true;
//		}
//		if (pRoot1 == nullptr)
//		{
//			return false;
//		}
//		if (pRoot1->val == pRoot2->val)
//		{
//			return IsSubtree(pRoot1->left, pRoot2->left) && IsSubtree(pRoot1->right, pRoot2->right);
//		}
//		return false;
//	}
//};

//18
//class Solution {
//public:
//	void Mirror(TreeNode * pRoot) {
//		if (pRoot == nullptr)
//		{
//			return ;
//		}
//
//		TreeNode* temp = nullptr;
//		temp = pRoot->left;
//		pRoot->left = pRoot->right;
//		pRoot->right = temp;
//		Mirror(pRoot->left);
//		Mirror(pRoot->right);
//	}
//};

//19
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		vector<int> res;
//		res.clear();
//
//		int row = matrix.size();
//		int col = matrix[0].size();
//
//		if (row == 0 || col == 0)
//		{
//			return res;
//		}
//		int top = 0, left = 0, right = col - 1, bottom = row - 1;
//		while (top <= bottom && left <= right)
//		{
//			for (int i = left; i <= right; i++) {
//				res.push_back(matrix[top][i]);
//			}
//			for (int i = top + 1; i <= bottom; i++)
//			{
//				res.push_back(matrix[i][right]);
//			}
//			if (top != bottom)
//			{
//				for (int i = right - 1; i >= left; i--) {
//					res.push_back(matrix[bottom][i]);
//				}
//			}
//			if (left != right)
//			{
//				for (int i = bottom - 1; i > top; i--) {
//					res.push_back(matrix[i][left]);
//				}
//			}
//			top++; left++; right--; bottom--;
//		}
//		return res;
//	}
//};

//20
//class Solution {
//public:
//	void push(int value) {
//		data.push(value);
//		if (mins.empty())
//		{
//			mins.push(value);
//		}
//		else
//		{
//			value < mins.top() ? mins.push(value) : mins.push(mins.top());
//		}
//	}
//	void pop() {
//		data.pop();
//		mins.pop();
//	}
//	int top() {
//		return data.top();
//	}
//	int min() {
//		return mins.top();
//	}
//private:
//	stack<int> data, mins;
//};

//21
//class Solution
//{
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV)
//	{
//		if (pushV.size() == 0)
//			return false;
//		vector<int> stack;
//		for (int i = 0, j = 0; i < pushV.size();)
//		{
//			stack.push_back(pushV[i++]);
//			while (popV[j] == stack.back() && j < popV.size())
//			{
//				stack.pop_back();
//				j++;
//			}
//		}
//		return stack.empty();
//	}
//};

//22
//class Solution
//{
//public:
//	vector<int> PrintFromTopToBottom(TreeNode* root)
//	{
//		queue<TreeNode*> q;
//		q.push(root);
//		vector<int> ans;
//		while (!q.empty())
//		{
//			TreeNode* r = q.front(); q.pop();
//			if (r == nullptr)
//			{
//				continue;
//			}
//			ans.push_back(r->val);
//			q.push(r->left);
//			q.push(r->right);
//		}
//		return ans;
//	}
//};

//23
//class Solution
//{
//public:
//	bool VerifySquenceOfBST(vector<int> sequence)
//	{
//		if (!sequence.size())
//		{
//			return false;
//		}
//		return Judge(sequence, 0, sequence.size() - 1);
//	}
//
//private:
//	bool Judge(vector<int> sequence, int start, int end)
//	{
//		if (start >= end)
//		{
//			return true;
//		}
//		int mid = end - 1;
//		while (sequence[mid] > sequence[end] && mid >=start)
//		{
//			--mid;
//		}
//		for (int j = mid; j >= start; j--)
//		{
//			if (sequence[j] > sequence[end])
//				return false;
//		}
//		return Judge(sequence, 0, mid) && Judge(sequence, mid + 1, end - 1);
//	}
//};

//24
//class Solution
//{
//public:
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber)
//	{
//		if (root)
//		{
//			dfsFind(root, expectNumber);
//		}
//		return ans;
//	}
//private:
//	vector<vector<int> > ans;
//	vector<int> temp;
//	void dfsFind(TreeNode* root, int val)
//	{
//		temp.push_back(root->val);
//		if (val - root->val == 0 && !root->left && !root->right)
//		{
//			ans.push_back(temp);
//		}
//		if (root->left)
//		{
//			dfsFind(root->left, val - root->val);
//		}
//		if (root->right)
//		{
//			dfsFind(root->right, val - root->val);
//		}
//		temp.pop_back();
//	}
//};

//25
//class Solution
//{
//public:
//	RandomListNode * Clone(RandomListNode* pHead)
//	{
//		if (!pHead)
//			return nullptr;
//		RandomListNode* current = pHead;
//		while (current)
//		{
//			RandomListNode* node = new RandomListNode(current->label);
//			node->next = current->next;
//			current->next = node;
//			current = node->next;
//		}
//		current = pHead;
//		while (current)
//		{
//			if (current->random) {
//				current->next->random = current->random->next;
//			}
//			current = current->next->next;
//		}
//		current = pHead;
//		RandomListNode* clone = current->next;
//		RandomListNode* temp;
//		while (current->next)
//		{
//			temp = current->next;
//			current->next = current->next->next;
//			current = temp;
//		}
//		return clone;
//	}
//};

//26
//class Solution
//{
//public:
//	TreeNode * Convert(TreeNode* root)
//	{
//		if (root == nullptr)
//			return nullptr;
//		TreeNode* pre = nullptr;
//		help(root, pre);
//
//		while (root->left)
//		{
//			root = root->left;
//		}
//		TreeNode* ans = root;
//		return ans;
//	}
//private:
//	void help(TreeNode* root,TreeNode*& pre)
//	{
//		if (root == nullptr)
//			return;
//		help(root->left,pre);
//
//		root->left = pre;
//		if (pre)
//			pre->right = root;
//		pre = root;
//
//		help(root->right, pre);
//	}
//};

//27
//class Solution
//{
//public:
//	vector<string> Permutation(string str)
//	{
//		vector<string> ans;
//		if (str.size() == 0)
//			return ans;
//		help(ans, str, 0);
//		sort(ans.begin(), ans.end());
//		return ans;
//	}
//
//	void help(vector<string>& ans, string str, int begin)
//	{
//		if (begin == str.size() - 1)
//			ans.push_back(str);
//		unordered_set<char> us;
//		for (int i = begin; i < str.size(); i++)
//		{
//			if (us.find(str[i]) == us.end())
//			{
//				us.insert(str[i]);
//				swap(str[i], str[begin]);
//				help(ans, str, begin + 1);
//				swap(str[i], str[begin]);
//			}
//		}
//	}
//};

//28
//class Solution
//{
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		int n = numbers.size();
//		if (n == 0) return 0;
//		int num = numbers[0], count = 1;
//		for (int i = 1; i < n; i++)
//		{
//			if (num == numbers[i])
//				count++;
//			else
//				count--;
//			if (count == 0)
//			{
//				num = numbers[i];
//				count = 1;
//			}
//		}
//
//		count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (num == numbers[i])
//				count++;
//		}
//		if (count * 2 > n)
//			return num;
//		return 0;
//	}
//};

class Solution
{
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
	{
		vector<int> result;
		int len = input.size();
		if (input.empty() || k <= 0 || len < k) return result;
		multiset<int, greater<int> > leastNumbers;
		multiset<int, greater<int> >::iterator iterGreater;

		vector<int>::iterator iter = input.begin();
		for (; iter != input.end(); iter++)
		{
			if (leastNumbers.size() < k)
			{
				leastNumbers.insert(*iter);
			}
			else
			{
				iterGreater = leastNumbers.begin();
				if ((*iter) < (*iterGreater))
				{
					leastNumbers.erase(iterGreater);
					leastNumbers.insert(*iter);
				}
			}
		}
		for (auto &ii : leastNumbers)
		{
			result.push_back(ii);
		}
		return result;
	}
};