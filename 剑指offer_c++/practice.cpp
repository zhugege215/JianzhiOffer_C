#include <set>
#include <vector>
#include <stack>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_set>
#include <functional>
#include <string>
#include <map>
#include <cmath>
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

//29
//class Solution
//{
//public:
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
//	{
//		vector<int> result;
//		int len = input.size();
//		if (input.empty() || k <= 0 || len < k) return result;
//		multiset<int, greater<int> > leastNumbers;
//		multiset<int, greater<int> >::iterator iterGreater;
//
//		vector<int>::iterator iter = input.begin();
//		for (; iter != input.end(); iter++)
//		{
//			if (leastNumbers.size() < k)
//			{
//				leastNumbers.insert(*iter);
//			}
//			else
//			{
//				iterGreater = leastNumbers.begin();
//				if ((*iter) < (*iterGreater))
//				{
//					leastNumbers.erase(iterGreater);
//					leastNumbers.insert(*iter);
//				}
//			}
//		}
//		for (auto &ii : leastNumbers)
//		{
//			result.push_back(ii);
//		}
//		return result;
//	}
//};

//30
//class Solution
//{
//public:
//	int FindGreatestSumOfSubArray(vector<int> array)
//	{
//		if (array.size() == 0) return 0;
//		int sum = array[0], temp_sum = array[0];
//		for (int i = 1; i < array.size(); i++)
//		{
//			temp_sum += array[i];
//
//			if (temp_sum > sum)
//				sum = temp_sum;
//
//			if(temp_sum < 0)
//			{
//				temp_sum = 0;
//			}
//		}
//		return sum;
//	}
//};

//31
//class Solution {
//public:
//	int NumberOf1Between1AndN_Solution(int n)
//	{
//		int count = 0;
//		long long i = 1;
//		for (i = 1; i <= n; i *= 10)
//		{
//			int a = n / i, b = n % i;
//			count = count + (a + 8) / 10 * i + (a % 10 == 1)*(b + 1);
//		}
//		return count;
//	}
//};

//32
//class Solution 
//{
//public:
//	string PrintMinNumber(vector<int> numbers) 
//	{
//		string s = "";
//		sort(numbers.begin(), numbers.end(), cmp);
//		for (auto &ii : numbers)
//		{
//			s += to_string(ii);
//		}
//		return s;
//	}
//
//	//注意在类中，一定要加static
//	static bool cmp(int a, int b)
//	{
//		string A = "";
//		string B = "";
//		A += to_string(a);
//		A += to_string(b);
//		B += to_string(b);
//		B += to_string(a);
//		return A < B;
//	}
//};

//33
//class Solution
//{
//public:
//	int GetUglyNumber_Solution(int index)
//	{
//		if (index <= 0) return 0;
//		vector<int> ans(index);
//		int t2 = 0, t3 = 0, t5 = 0;
//		ans[0] = 1;
//		for (int i = 1; i < index; i++)
//		{
//			ans[i] = min(ans[t2] * 2, min(ans[t3] * 3, ans[t5] * 5));
//			if (ans[i] == ans[t2] * 2) t2++;
//			if (ans[i] == ans[t3] * 3) t3++;
//			if (ans[i] == ans[t5] * 5) t5++;
//		}
//		return ans[index - 1];
//	}
//};

//34
//class Solution
//{
//public:
//	int FirstNotRepeatingChar(string str)
//	{
//		map<char, int> mp;
//		for (auto i = 0; i < str.size(); i++)
//		{
//			mp[str[i]]++;
//		}
//		for (auto i = 0; i < str.size(); i++)
//		{
//			if (mp[str[i]] == 1)
//				return i;
//		}
//		return -1;
//	}
//};

//55
//class Solution
//{
//public:
//	ListNode * EntryNodeOfLoop(ListNode* pHead)
//	{
//		if (pHead == nullptr || pHead->next == nullptr)
//			return nullptr;
//		ListNode *pre = pHead;
//		ListNode *pos = pHead->next;
//		while (pos)
//		{
//			pre->next = nullptr;
//			pre = pos;
//			pos = pos->next;
//		}
//		return pre;
//	}
//};

//35
//class Solution
//{
//public:
//	int InversePairs(vector<int> data)
//	{
//		int length = data.size();
//		if (length <= 0)
//			return 0;
//		vector<int> copy;
//		for (int i = 0; i < length; ++i)
//		{
//			copy.push_back(data[i]);
//		}
//		
//		long long count = InversePairsCore(data, copy, 0, length - 1);
//		return count % 1000000007;
//	}
//
//	long long InversePairsCore(vector<int> &data, vector<int> &copy, int start, int end)
//	{
//		if(start == end)
//		{
//			copy[start] = data[start];
//			return 0;
//		}
//
//		int length = (end - start) / 2;
//		long long left = InversePairsCore(copy, data, start, start + length);
//		long long right = InversePairsCore(copy, data, start+length+1, end);
//
//		int i = start + length;
//		int j = end;
//		int indexcopy = end;
//		long long count = 0;
//		while (i >= start && j >= start+length+1)
//		{
//			if (data[i] > data[j])
//			{
//				count = count + j - start - length;
//				copy[indexcopy--] = data[i--];
//			}
//			else
//			{
//				copy[indexcopy--] = data[j--];
//			}
//		}
//		for (; i >= start; i--)
//			copy[indexcopy--] = data[i];
//		for (; j >= start + length + 1; j--)
//			copy[indexcopy--] = data[j];
//		return left + right + count;
//	}
//};

//36
//class Solution
//{
//public:
//	ListNode * FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2)
//	{
//		int len1 = len(pHead1);
//		int len2 = len(pHead2);
//		if (len1 >= len2)
//		{
//			pHead1 = golen(pHead1, len1 - len2);
//		}
//		else
//		{
//			pHead2 = golen(pHead2, len2 - len1);
//		}
//		while (pHead1)
//		{
//			if (pHead1 == pHead2)
//			{
//				return pHead1;
//			}
//			else
//			{
//				pHead1 = pHead1->next;
//				pHead2 = pHead2->next;
//			}
//		}
//		return nullptr;
//	}
//
//	int len(ListNode* p)
//	{
//		int sum = 0;
//		if (!p)
//			return sum;
//		while (p)
//		{
//			sum++;
//			p = p->next;
//		}
//		return sum;
//	}
//
//	ListNode* golen(ListNode* p, int len)
//	{
//		if (len == 0)
//			return p;
//		while (len)
//		{
//			p = p->next;
//			len--;
//		}
//		return p;
//	}
//};

//37
//class Solution
//{
//public:
//	int GetNumberOfK(vector<int> data, int k)
//	{
//		int length = data.size();
//		if (length <= 0)
//			return 0;
//		int f_appear = get_f(data, k, 0, length - 1);
//		int l_appear = get_l(data, k, 0, length - 1);
//		if (f_appear != -1 && l_appear != -1)
//		{
//			return l_appear - f_appear + 1;
//		}
//		return 0;
//	}
//
//	int get_f(vector<int> data, int k, int start, int end)
//	{
//		if (start > end)
//			return -1;
//		int mid = (start + end) / 2;
//		if (k > data[mid])
//			return get_f(data, k, mid + 1, end);
//		else if (k < data[mid])
//			return get_f(data, k, start, mid - 1);
//		else if (mid - 1 >= 0 && data[mid - 1] == k)
//			return get_f(data, k, start, mid - 1);
//		else
//			return mid;
//	}
//
//	int get_l(vector<int> data, int k, int start, int end)
//	{
//		if (start > end)
//			return -1;
//		int mid = (start + end) / 2;
//		while (start <= end)
//		{
//			if (data[mid] <= k)
//				start = mid + 1;
//			else
//				end = mid - 1;
//			mid = (start + end) / 2;
//		}
//		return end;
//	}
//};

//38
//class Solution
//{
//public:
//	int TreeDepth(TreeNode* pRoot)
//	{
//		if (pRoot == nullptr)
//			return 0;
//		int left = TreeDepth(pRoot->left);
//		int right = TreeDepth(pRoot->right);
//		return max(left + 1, right + 1);
//	}
//};

//38 非递归
//class Solution
//{
//public:
//	int TreeDepth(TreeNode* pRoot)
//	{
//		if (pRoot == nullptr)
//			return 0;
//		queue<TreeNode*> q;
//		q.push(pRoot);
//		int depth = 0, count = 0, nextCount = 1;
//		while (!q.empty())
//		{
//			TreeNode* top = q.front();
//			q.pop();
//			count++;
//			if (top->left)
//				q.push(top->left);
//			if (top->right)
//				q.push(top->right);
//			if (count == nextCount)
//			{
//				depth++;
//				count = 0;
//				nextCount = q.size();
//			}
//		}
//		return depth;
//	}
//};

//39
//class Solution
//{
//public:
//	bool IsBalanced_Solution(TreeNode* pRoot)
//	{
//		getDepth(pRoot);
//		return isBalenced;
//	}
//
//	int getDepth(TreeNode* pRoot)
//	{
//		if (pRoot == nullptr)
//			return 0;
//		int left = getDepth(pRoot->left);
//		int right = getDepth(pRoot->right);
//		if (abs(left - right) > 1)
//		{
//			isBalenced = false;
//			
//		}
//		return right > left ? right + 1 : left + 1;
//	}
//
//private:
//	bool isBalenced = true;
//};

//40
//class Solution {
//public:
//	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
//	{
//		if (data.size() < 2)
//			return;
//		int size = data.size();
//		int temp = data[0];
//		for (int i = 1; i < size; i++)
//		{
//			temp = temp ^ data[i];
//		}
//		if (temp == 0)
//			return;
//		int index = 0;
//		while ((temp & 1) == 0)
//		{
//			temp = temp >> 1;
//			++index;
//		}
//		*num1 = *num2 = 0;
//		for (int i = 0; i < size; i++)
//		{
//			if (IsBit(data[i], index))
//				*num1 ^= data[i];
//			else
//			{
//				*num2 ^= data[i];
//			}
//		}
//	}
//
//	bool IsBit(int num, int index)
//	{
//		num = num >> index;
//		return (num & 1);
//	}
//};

//41
//class Solution
//{
//public:
//	vector<vector<int> > FindContinuousSequence(int sum)
//	{
//		vector<vector<int> > res;
//		if (sum < 3)
//			return res;
//		int mid = (sum + 1) >> 1;
//		int begin = 1;
//		int end = 2;
//		int cur = begin + end;
//		while (begin < mid && end < sum)
//		{
//			while (cur > sum)
//			{
//				cur -= begin;
//				begin++;
//			}
//			if (cur == sum)
//				InsertRes(begin, end, res);
//			end++;
//			cur += end;
//		}
//		return res;
//	}
//
//	void InsertRes(int begin, int end, vector<vector<int> > &res)
//	{
//		vector<int> temp;
//		for (int i = begin; i <= end; i++)
//			temp.push_back(i);
//		res.push_back(temp);
//	}
//};

//41
//方法2
//class Solution
//{
//public:
//	vector<vector<int> > FindContinuousSequence(int sum)
//	{
//		vector<vector<int> > res;
//		for (int n = (int)sqrt(sum*2); n > 1; n--)
//		{
//			if ((n & 1) == 1 && (sum % n) == 0 || (sum % n) * 2 == n)
//			{
//				vector<int> temp;
//				for (int j = 0, k = (sum / n) - (n - 1) / 2; j < n; j++, k++)
//				{
//					temp.push_back(k);
//				}
//				res.push_back(temp);
//			}
//		}
//		return res;
//	}
//};

//42
//class Solution {
//public:
//	vector<int> FindNumbersWithSum(vector<int> array, int sum)
//	{
//		vector<int> res;
//		int i = 0, j = array.size() - 1;
//		while (i < j)
//		{
//			if ((array[i] + array[j]) == sum)
//			{
//				res.push_back(array[i]);
//				res.push_back(array[j]);
//				break;
//			}
//			if (array[i] + array[j] > sum)
//				j--;
//			if (array[i] + array[j] < sum)
//			{
//				i++;
//			}
//		}
//		return res;
//	}
//};

//43
//class Solution
//{
//public:
//	string LeftRotateString(string str, int n)
//	{
//		int len = str.size();
//		if (len == 0)
//			return "";
//		n = n % len;
//		str = str + str;
//		return str.substr(n, len);
//	}
//};

//44
//class Solution
//{
//public:
//	string ReverseSentence(string str)
//	{
//		int n = str.size();
//		string temp = "", ans = "";
//		for (int i = 0; i < n; i++)
//		{
//			if (str[i] == ' ')
//			{
//				ans = " " + temp + ans;
//				temp = "";
//			}
//			else
//			{
//				temp = temp + str[i];
//			}
//		}
//		if (temp.size())
//			ans = temp + ans;
//		return ans;
//	}
//};

//45
//class Solution {
//public:
//	bool IsContinuous(vector<int> numbers)
//	{
//		if (numbers.size() != 5)
//			return false;
//		int min = 14, max = -1, flag = 0;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			int number = numbers[i];
//			if (number < 0 || number > 13)
//				return false;
//			if (number == 0)
//				continue;
//			if (((flag >> number) & 1) == 1)
//				return false;
//			flag |= (1 << number);
//			if (number > max) max = number;
//			if (number < min) min = number;
//			if ((max - min) >= 5)
//				return false;
//		}
//		return true;
//	}
//};

//46
//class Solution
//{
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		if (n < 1 || m < 1) return -1;
//		vector<int> array(n, 0);
//		int i = -1, step = 0, count = n;
//		while (count > 0)
//		{
//			i++;
//			if (i >= n) i = 0;
//			if (array[i] == -1) continue;
//			step += 1;
//			if (step == m)
//			{
//				array[i] == -1;
//				step = 0;
//				count--;
//			}
//		}
//		return i;
//	}
//};

//47
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		int ans;
//		ans && (ans += Sum_Solution(n - 1));
//		return ans;
//	}
//};

//48
//class Solution
//{
//public:
//	int Add(int num1, int num2)
//	{
//		int temp = 0;
//		while (num2 != 0)
//		{
//			temp = num1 ^ num2;
//			num2 = (num1 & num2) << 1;
//			num1 = temp;
//		}
//		return num1;
//	}
//};

//49
//class Solution
//{
//public:
//	int StrToInt(string str)
//	{
//		int n = str.size(), s = 1;
//		if (!n)
//			return 0;
//		long long res = 0;
//		if (str[0] == '-')
//			s = -1;
//		for (int i = (str[0] == '+' || str[0] == '-') ? 1 : 0; i < n; i++)
//		{
//			if (!(str[i] >= '0' && str[i] <= '9'))
//				return 0;
//			res = res * 10 + (str[i] - '0');
//		}
//		return res * s;
//	}
//};

//50
//class Solution {
//public:
//	bool duplicate(int numbers[], int length, int* duplication) {
//		for (int i = 0; i < length; i++)
//		{
//			int index = numbers[i];
//			if (index >= length)
//				index -= length;
//			if (numbers[index] >= length)
//			{
//				*duplication = index;
//				return true;
//			}
//			numbers[index] += length;
//		}
//		return false;
//	}
//};

//51
//class Solution
//{
//public:
//	vector<int> multiply(const vector<int> &A)
//	{
//		vector<int> ans;
//		int si = A.size();
//		ans.push_back(1);
//		for (int i = 0; i < si - 1; i++)
//		{
//			ans.push_back(ans.back() * A[i]);
//		}
//		int temp = 1;
//		for (int i = si - 1; i >= 0; i--)
//		{
//			ans[i] = ans[i] * temp;
//			temp = temp * A[i];
//		}
//		return ans;
//	}
//};

//52
//class Solution
//{
//public:
//	bool match(char* str, char* pattern)
//	{
//		if (str == nullptr || pattern == nullptr)
//			return false;
//		return matchfun(str, pattern);
//	}
//
//	bool matchfun(char* str, char* pattern)
//	{
//		if (*str == '\0' && *pattern == '\0')
//			return true;
//		if (*str != '\0' && *pattern == '\0')
//			return false;
//		if (*(pattern + 1) == '*')
//		{
//			if (*str == *pattern || (*pattern == '.' && *str != '\0'))
//				return matchfun(str + 1, pattern) || matchfun(str, pattern + 2);
//			else
//				return matchfun(str, pattern + 2);
//		}
//		if (*str == *pattern || (*pattern == '.' && *str != '\0'))
//			return matchfun(str + 1, pattern + 1);
//		return false;
//	}
//};

//53
//class Solution
//{
//public:
//	bool isNumeric(char *string)
//	{
//		bool hase = false, hasfu = false, hasdian = false;
//		for (int i = 0; i < strlen(string); i++)
//		{
//			if (string[i] == 'e' || string[i] == 'E')
//			{
//				if (i == (strlen(string) - 1))
//					return false;
//				if (hase)
//					return false;
//				hase = true;
//			}
//			else if (string[i] == '+' || string[i] == '-')
//			{
//				if (hasfu && string[i - 1] != 'e' && string[i - 1] != 'E')
//					return false;
//				if (!hasfu && i > 0 && string[i - 1] != 'e'&&string[i - 1] != 'E')
//					return false;
//				hasfu = true;
//			}
//			else if (string[i] == '.')
//			{
//				if (hase || hasdian)
//					return false;
//				hasdian = true;
//			}
//			else if (string[i] < '0' || string[i] > '9')
//				return false;
//		}
//		return true;
//	}
//};

//54
//class Solution
//{
//public:
//	Solution()
//	{
//		memset(cnt, 0, sizeof(cnt));
//	}
//
//	void Insert(char ch)
//	{
//		++cnt[ch - '\0'];
//		if (cnt[ch - '\0'] == 1)
//			data.push(ch);
//	}
//
//	char FirstAppearingOnce()
//	{
//		while (!data.empty() && cnt[data.front() - '\0'] >= 2)
//		{
//			data.pop();
//		}
//		if (data.empty())
//			return '#';
//		return data.front();
//	}
//
//private:
//	queue<char> data;
//	unsigned int cnt[128];
//};

//55
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//	ListNode(int x): val(x), next(nullptr) {}
//};
//
//class Solution
//{
//public:
//	ListNode * EntryNodeOfLoop(ListNode* pHead)
//	{
//		if (pHead == nullptr || pHead->next == nullptr)
//			return nullptr;
//		ListNode *p1, *p2;
//		p1 = p2 = pHead;
//		while (p2 != nullptr && p2->next != nullptr)
//		{
//			p1 = p1->next;
//			p2 = p2->next->next;
//			if (p1 == p2)
//			{
//				p1 = pHead;
//				while (p1 != p2)
//				{
//					p1 = p1->next;
//					p2 = p2->next;
//				}
//				if (p1 == p2)
//					return p1;
//			}
//		}
//		return nullptr;
//	}
//};

//56
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//class Solution
//{
//public:
//	ListNode * deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == nullptr)
//			return nullptr;
//		if (pHead != nullptr &&pHead->next == nullptr)
//			return pHead;
//		ListNode *current;
//		if (pHead->next->val == pHead->val)
//		{
//			current = pHead->next->next;
//			while (current!=nullptr && current->val == pHead->val)
//			{
//				current = current->next;
//			}
//			return deleteDuplication(current);
//		}
//		else
//		{
//			current = pHead->next;
//			pHead->next = deleteDuplication(current);
//			return pHead;
//		}
//	}
//};

//57
//struct TreeLinkNode 
//{
//	int val;
//	struct TreeLinkNode *left;
//	struct TreeLinkNode *right;
//	struct TreeLinkNode *next;
//	TreeLinkNode(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {}
//};
//
//class Solution
//{
//public:
//	TreeLinkNode * GetNext(TreeLinkNode *pNode)
//	{
//		if (pNode == nullptr)
//			return nullptr;
//		if (pNode->right != nullptr)
//		{
//			TreeLinkNode * ans = pNode->right;
//			while (ans->left)
//			{
//				ans = ans->left;
//			}
//			return ans;
//		}
//		while (pNode->next != nullptr)
//		{
//			if (pNode->next->left == pNode)
//				return pNode->next;
//			pNode = pNode->next;
//		}
//		return nullptr;
//	}
//};

//58
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x): val(x), left(nullptr), right(nullptr){}
//};
//
//class Solution {
//public:
//	bool isSymmetrical(TreeNode* pRoot)
//	{
//		if (pRoot == nullptr)
//			return false;
//		return core(pRoot->left, pRoot->right);
//	}
//
//	bool core(TreeNode* left, TreeNode* right)
//	{
//		if (left == nullptr)
//			return right == nullptr;
//		if (right == nullptr)
//			return false;
//		if (left->val != right->val)
//			return false;
//		return core(left->left, right->right) && core(left->right, right->left);
//	}
//};

//59
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
//};
//
//class Solution
//{
//public:
//	vector<vector<int> > Print(TreeNode* pRoot)
//	{
//		stack<TreeNode*> dan, shuang;
//		vector<vector<int> > ans;
//		vector<int> temp;
//		dan.push(pRoot);
//		int layer = 1;
//		while (!dan.empty() || !shuang.empty())
//		{
//			if (layer % 2 != 0)
//			{
//				while (!dan.empty())
//				{
//					if (dan.top() != nullptr)
//					{
//						cout << dan.top()->val << " ";
//						temp.push_back(dan.top()->val);
//						shuang.push(dan.top()->left);
//						shuang.push(dan.top()->right);
//					}
//					dan.pop();
//				}
//				if (!temp.empty())
//				{
//					ans.push_back(temp);
//					temp.clear();
//					layer++;
//					cout << endl;
//				}
//			}
//			else
//			{
//				while (!shuang.empty())
//				{
//					if (shuang.top() != nullptr)
//					{
//						cout << shuang.top()->val << " ";
//						temp.push_back(shuang.top()->val);
//						dan.push(shuang.top()->right);
//						dan.push(shuang.top()->left);
//					}
//					shuang.pop();
//				}
//				if (!temp.empty())
//				{
//					ans.push_back(temp);
//					temp.clear();
//					layer++;
//					cout << endl;
//				}
//			}
//		}
//		return ans;
//	}
//};

//60
//struct TreeNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
//};
//
//class Solution {
//public:
//	vector<vector<int> > Print(TreeNode* pRoot) {
//		vector<vector<int> > ans;
//		if (pRoot == nullptr)
//			return ans;
//		vector<int> temp;
//		int length = 0;
//		queue<TreeNode*> q;
//		q.push(pRoot);
//		while (!q.empty())
//		{
//			length = q.size();
//			while (length)
//			{
//				TreeNode* aa = q.front();
//				if (aa->left)
//					q.push(aa->left);
//				if (aa->right)
//					q.push(aa->right);
//				temp.push_back(aa->val);
//				q.pop();
//				length--;
//			}
//			ans.push_back(temp);
//			temp.clear();
//		}
//		return ans;
//	}
//};

//61
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
//};
//
//class Solution
//{
//public:
//	char* Serialize(TreeNode *root)
//	{
//		if (root == nullptr)
//			return nullptr;
//		string str;
//		Serialize(root, str);
//		char* ret = new char[str.size() + 1];
//		int i;
//		for (i = 0; i < str.size(); i++)
//			ret[i] = str[i];
//		ret[i] = '\0';
//		return ret;
//	}
//
//	TreeNode* Deserialize(char *str)
//	{
//		if (str == nullptr)
//			return nullptr;
//		TreeNode* ans = Deserialize(&str);
//		return ans;
//	}
//private:
//	void Serialize(TreeNode *root, string &str)
//	{
//		if (root == nullptr)
//		{
//			str += '#';
//			return;
//		}
//		string temp = to_string(root->val);
//		str += temp;
//		str += ',';
//		Serialize(root->left, str);
//		Serialize(root->right, str);
//	}
//
//	TreeNode* Deserialize(char ** str)
//	{
//		if (**str == '#')
//		{
//			(*str)++;
//			return nullptr;
//		}
//		int num = 0;
//		while (**str != '\0' && **str != ',')
//		{
//			num = num + 10 + ((**str) - '0');
//			++(*str);
//		}
//		TreeNode* root = new TreeNode(num);
//		if (**str == '\0')
//			return root;
//		else
//		{
//			(*str)++;
//		}
//		root->left = Deserialize(str);
//		root->right = Deserialize(str);
//		return root;
//	}
//};

//62
//struct TreeNode
//{
//	int val;
//	TreeNode * left;
//	TreeNode * right;
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//class Solution
//{
//	int count = 0;
//public:
//	TreeNode * KthNode(TreeNode *pRoot, int k)
//	{
//		if (pRoot == nullptr)
//			return nullptr;
//		else
//		{
//			TreeNode* ans = KthNode(pRoot->left, k);
//			if (ans)
//				return ans;
//
//			if (++count == k)
//				return pRoot;
//
//			ans = KthNode(pRoot->right, k);
//			if (ans)
//				return ans;
//			return ans;
//		}
//	}
//};

//63
//class Solution {
//	priority_queue<int, vector<int>, less<int>> dadingdui;
//	priority_queue<int, vector<int>, greater<int>> xiaodingdui;
//
//public:
//	void Insert(int num)
//	{
//		if (dadingdui.empty() || num <= dadingdui.top())
//			dadingdui.push(num);
//		else
//		{
//			xiaodingdui.push(num);
//		}
//		if (dadingdui.size() + 1 == xiaodingdui.size())
//		{
//			dadingdui.push(xiaodingdui.top());
//			xiaodingdui.pop();
//		}
//		if (dadingdui.size() == xiaodingdui.size() + 2)
//		{
//			xiaodingdui.push(dadingdui.top());
//			dadingdui.pop();
//		}
//	}
//
//	double GetMedian()
//	{
//		return dadingdui.size() > xiaodingdui.size() ? dadingdui.top() : (dadingdui.top() + xiaodingdui.top()) / 2.0;
//	}
//
//};

//64
//class Solution {
//public:
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//	{
//		vector<int> ans;
//		deque<int> s;
//		int n = num.size();
//		if (n == 0)
//			return ans;
//		for (int i = 0; i < n; ++i)
//		{
//			while (s.size() && num[s.back()] <= num[i])
//			{
//				s.pop_back();
//			}
//			while (s.size() && i - s.front() >= size)
//			{
//				s.pop_front();
//			}
//			s.push_back(i);
//			if (size && (i + 1) >= size)
//				ans.push_back(num[s.front()]);
//		}
//		return ans;
//	}
//};

//65
//class Solution {
//public:
//	bool hasPath(char* matrix, int rows, int cols, char* str)
//	{
//		if (matrix == nullptr || rows < 1 || cols < 1 || str == nullptr)
//			return false;
//		bool *visited = new bool[rows * cols];
//		memset(visited, 0, rows * cols);
//
//		int pathLength = 0;
//
//		for (int row = 0; row < rows; row++)
//		{
//			for (int col = 0; col < cols; col++)
//			{
//				if (hasPathCore(matrix, rows, cols, row, col, str, pathLength, visited))
//				{
//					return true;
//				}
//			}
//		}
//
//		delete[] visited;
//		return false;
//	}
//
//	bool hasPathCore(const char* matrix, int rows, int cols, int row, int col, const char* str, int& pathLength, bool* visited) {
//		if (str[pathLength] == '\0')
//			return true;
//
//		bool hasPath = false;
//		if (row >= 0 && row < rows && col >= 0 && col < cols && matrix[row * cols + col] == str[pathLength] && !visited[row * cols + col]) {
//			++pathLength;
//			visited[row * cols + col] = true;
//			hasPath = hasPathCore(matrix, rows, cols, row, col - 1, str, pathLength, visited) ||
//				hasPathCore(matrix, rows, cols, row - 1, col, str, pathLength, visited) ||
//				hasPathCore(matrix, rows, cols, row, col + 1, str, pathLength, visited) ||
//				hasPathCore(matrix, rows, cols, row + 1, col, str, pathLength, visited);
//			if (!hasPath)
//			{
//				pathLength--;
//				visited[row * cols + col] = false;
//			}
//		}
//		return hasPath;
//	}
//};

//66
//class Solution {
//public:
//	int movingCount(int threshold, int rows, int cols)
//	{
//		if (threshold < 0 || rows < 0 || cols < 0)
//		{
//			return 0;
//		}
//		bool* visited = new bool[rows*cols];
//		memset(visited, 0, rows*cols);
//
//		int count = movingCountCore(threshold, rows, cols, 0, 0, visited);
//		delete[] visited;
//		return count;
//	}
//
//	int movingCountCore(int threshold, int rows, int cols, int row, int col, bool * visited) {
//		int count = 0;
//		if (check(threshold, rows, cols, row, col, visited))
//		{
//			visited[row * cols + col] = true;
//			count = 1 + movingCountCore(threshold, rows, cols, row - 1, col, visited) +
//				movingCountCore(threshold, rows, cols, row, col - 1, visited) +
//				movingCountCore(threshold, rows, cols, row + 1, col, visited) +
//				movingCountCore(threshold, rows, cols, row, col + 1, visited);
//		}
//		return count;
//	}
//
//	bool check(int threshold, int rows, int cols, int row, int col, bool* visited) {
//		if (row >= 0 && row < rows && col >= 0 && col < cols && getDigitSum(row) + getDigitSum(col) <= threshold && !visited[row * cols + col])
//		{
//			return true;
//		}
//		return false;
//	}
//
//	int getDigitSum(int number) {
//		int sum = 0;
//		while (number > 0)
//		{
//			sum += number % 10;
//			number /= 10;
//		}
//		return sum;
//	}
//};