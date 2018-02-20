#include <string>
using namespace std;

class Solution {
public:
	string ReverseSentence(string str) {
		string res = "", temp = "";
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ') {
				res = " " + temp + res;
				temp = "";
			}
			else
			{
				temp += str[i];
			}
		}
		if (temp.size())
		{
			res = temp + res;
		}
		return res;
	}
};