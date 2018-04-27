int upper_bound(int *array, int size, int key)
{
	int len = size - 1;
	int first = 0, half, middle;
	while (len > 0)
	{
		half = len >> 1;
		middle = first + half;
		if (array[middle] <= key)
		{
			first = middle + 1;
			len = len - half - 1;
		}
		else
		{
			len = half;
		}
	}
}