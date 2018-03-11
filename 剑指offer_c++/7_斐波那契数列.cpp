//可以理解为最简单的动态规划

class Solution {
public:
	int Fibonacci(int n) {
		int f = 0, g = 1;
		while (n--)
		{
			g += f;
			f = g - f;
		}
		return f;
	}
};