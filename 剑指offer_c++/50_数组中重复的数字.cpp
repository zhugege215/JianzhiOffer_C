class Solution {
public:
	bool duplicate(int numbers[], int length, int* duplication) {
		for (size_t i = 0; i < length; i++)
		{
			int index = numbers[i];
			if (index >= length)
				index -= length;
			if (numbers[index] >= length)
			{
				*duplication = index;
				return true;
			}
			numbers[index] += length;
		}
		return false;
	}
};