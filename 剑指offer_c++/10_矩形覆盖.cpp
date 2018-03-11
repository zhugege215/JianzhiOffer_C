//8, 9, 10是同一道类型的题的不同变体
//找啊数学规律 + 递归

class Solution {
public:
	int rectCover(int number) {
		if (number <= 0)
		{
			return 0;
		}
		else if (number ==1)
		{
			return 1;
		}
		else if (number ==2)
		{
			return 2;
		}
		else
		{
			return rectCover(number - 1) + rectCover(number - 2);
		}
	}
};