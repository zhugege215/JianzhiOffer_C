class Solution
{
public:
	int singleNumber(int A[], int n)
	{
		if (n <= 0)
			return 0;
		
		int sum = 0;
		
		for (int i = 0; i < n; i++)
		{
			sum ^= A[i];
		}
		return sum;
	}
};