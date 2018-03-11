//8, 9, 10是同一道类型的题的不同变体
//找数学规律题 + 递归

class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 0)
		{
			return -1;
		}
		else if (number == 1)
		{
			return 1;
		}
		else
		{
			return 2 * jumpFloorII(number - 1);
		}
	}
};