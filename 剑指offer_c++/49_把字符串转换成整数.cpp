#include <string>
using namespace std;

class Solution {
public:
	int StrToInt(string str) {
		int n = str.size(), s = 1;
		long long res = 0;
		if (!n) return 0;
		if (str[0] == '-')
			s = -1;
		for (size_t i = (str[0] == '+' || str[0] == '-') ? 0 : 1; i < n; i++)
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return 0;
			res = (res << 1) + (res << 3) + (str[i] & 0xf);
		}
		return res * s;
	}
};