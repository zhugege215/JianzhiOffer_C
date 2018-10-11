//全局变量
int polySides; //代表有多少个点
float polyX[]; //横坐标数组
float polyY[]; //纵坐标数组
float x, y; //目标点的坐标

bool pointInPolygon()
{
	int i, j = polySides - 1;
	bool oddNodes = false;

	for (int i = 0; i < polySides; i++)
	{
		if ((polyY[i] < y && polyY[j] >= y) || (polyY[j] < y && polyY[i] >= y))
		{
			if (polyX[i] + (y - polyY[i]) / (polyY[j] - polyY[i])*(polyX[j] - polyX[i]) < x) //两点式求直线方程
			{
				oddNodes = !oddNodes;
			}
		}
		j = i;
	}

	return oddNodes;
}