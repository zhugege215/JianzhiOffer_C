#include <vector>
#include <map>
#include <algorithm>
using namespace std;
struct Point
{
	int x;
	int y;
	Point() :x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

class Solution
{
public:
	int maxPoints(vector<Point> &points)
	{
		int size = points.size();
		if (size == 0)
			return 0;
		else if (size == 1)
			return 1;
		
		int ans = 0;
		for (int i = 0; i < size; i++)
		{
			map<double, int> mp;
			int temp = 1;
			int vcnt = 0;
			int dup = 0;
			for (int j = 0; j < size; j++)
			{
				if (j != i)
				{
					double dex = points[i].x - points[j].x;
					double dey = points[i].y - points[j].y;
					if (dex == 0 && dey == 0)
						dup++;
					else if (dex == 0)            //这里增加垂直的情况是因为0不能做分母
					{
						if (vcnt == 0)
							vcnt += 2;
						else
							vcnt += 1;
						temp = max(temp, vcnt);
					}
					else
					{
						double k = dey / dex;
						if (mp[k] == 0)
							mp[k] = 2;
						else
						{
							mp[k]++;
						}
						temp = max(mp[k], temp);
					}
				}
			}
			ans = max(ans, temp + dup);
		}
		return ans;
	}
};