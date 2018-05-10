int lower_bound(int *array, int size, int key)
{
	int first = 0, middle;
	int half, len;
	len = size;

	while (len > 0)
	{
		half = len >> 1;
		middle = first + half;
		if (key <= array[middle])
			len = half;
		else
		{
			first = middle + 1;
			len = len - half - 1;
		}
	}
	return first;
}

// 二分法  37题