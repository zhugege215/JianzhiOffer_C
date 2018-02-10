#include <stdexcept>
using namespace std;

class Solution {
public:
	double Power(double base, int exponent) {
		double res = 1, curr = base;
		int exp = 0;
		if (exponent > 0)
		{
			exp = exponent;
		}
		else if (exponent < 0)
		{
			if (base == 0)
			{
				throw runtime_error("xxx");
			}
			exp = -exponent;
		}
		else
		{
			return 1;
		}

		while (exp != 0)
		{
			if ((exp & 1) == 1) {
				res *= curr;
			}
			curr *= curr;
			exp >>= 1;
		}
		return exponent > 0 ? res : (1 / res);
	}
};