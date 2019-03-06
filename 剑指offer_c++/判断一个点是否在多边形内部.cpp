//ȫ�ֱ���
int polySides = 6; //�����ж��ٸ���
float polyX[6]; //����������
float polyY[6]; //����������
float x, y; //Ŀ��������

bool pointInPolygon()
{
	int i, j = polySides - 1;
	bool oddNodes = false;

	for (i = 0; i < polySides; i++)
	{
		if ((polyY[i] < y && polyY[j] >= y) || (polyY[j] < y && polyY[i] >= y))
		{
			if (polyX[i] + (y - polyY[i]) / (polyY[j] - polyY[i])*(polyX[j] - polyX[i]) < x) //����ʽ��ֱ�߷���
			{
				oddNodes = !oddNodes;
			}
		}
		j = i;
	}

	return oddNodes;
}