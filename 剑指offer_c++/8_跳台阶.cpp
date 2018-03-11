//8, 9, 10是同一道类型的题的不同变体
//找数学规律题 + 递归

class Solution {
public:
	int jumpFloor(int number) {
		if (number <= 0)
		{
			return -1;
		}
		else if (number == 1)
		{
			return 1;
		}
		else if (number ==2)
		{
			return 2;
		}
		else
		{
			return jumpFloor(number - 1) + jumpFloor(number - 2);
		}
	}
};