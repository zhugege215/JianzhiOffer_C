#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

//���ļ�
//int main() {
//	ifstream in("file_test.txt");
//	string a,b;
//	int aa;
//	/*while (getline(in, a))
//	{
//		cout << a << endl;
//	}*/
//	in >> a;
//	in >> b;
//	in >> aa;
//	cout << a << endl;
//	cout << b << endl;
//	cout << aa << endl;
//}

//д�ļ�
//int main()
//{
//	ofstream location_out;
//	string ss;
//	ss = ��(1, 2)��;
//	location_out.open("location_out.txt", std::ios::out | std::ios::app);  //��д������ļ�ĩβ��ӵķ�ʽ��.txt�ļ���û�еĻ��ʹ������ļ���
//	if (!location_out.is_open())
//		return 0;
//
//	location_out << ss << endl;
//	location_out << ��(�� << 5 << ��, �� << 10 << ��) \n��;    ��//����(5,10) �س���д��.txt�ļ���
//
//	location_out.close();
//}

//<map>
//int main() {
//	map<string, size_t> word_count;
//	set<string> exclude = {"The", "But", "And", "a"};
//	string word;
//	while (cin >> word)       //ctrl + z����
//	{
//		if(exclude.find(word) == exclude.end())
//			++word_count[word];
//	}
//	for (const auto &w : word_count)
//		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
//}

//�ӷ�����������ۣ�����ȡ��
//int main()
//{
//	int left = 0, right = 5;
//	int mid = left + (right - left) / 2;
//	cout << mid << endl;//2
//	mid = 1 / 2 + 8;
//	cout << mid << endl;//8
//}