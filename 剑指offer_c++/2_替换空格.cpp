#include <vector>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length) {
		if (length < 0 || str == NULL)
		{
			return;
		}

		int i = 0;
		int old_number = 0;
		int new_number = 0;
		while (str[i] != '\0')
		{
			old_number++;
			if (str[i] == ' ') {
				new_number += 3;
			}
			else
			{
				new_number++;
			}
			i++;
		}
		if (new_number > length)
		{
			return;
		}

		while (old_number >= 0 && new_number > old_number)
		{
			if (str[old_number] == ' ')
			{
				str[new_number--] = '0';
				str[new_number--] = '2';
				str[new_number--] = '%';
			}
			else
			{
				str[new_number--] = str[old_number];
			}
			old_number--;
		}
	}
};