#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
typedef long long ll;
const int N = 1e6 + 7;	//1000007
int a[N];

//int main() {
//	int n, k, temp;
//	cin >> n >> k;
//	vector<int> vec(n, 0);
//	for (auto &i: vec)
//	{
//		cin >> temp;
//		i = temp;
//	}
//	sort(vec.begin(), vec.end());
//	n = unique(vec.begin(), vec.end()) - vec.begin();
//	int r = 0, ans = 0;
//	for (int l = 0; l < n; l++) {
//		while (r < n && vec[r] - vec[l] < k)
//		{
//			r++;
//		}
//		if (r == n) break;
//		if ((vec[r] - vec[l]) == k)
//			ans++;
//	}
//	cout << ans;
//	return 0;
//}

int main() {
	ifstream in("file_test.txt");
	string a,b;
	int aa;
	/*while (getline(in, a))
	{
		cout << a << endl;
	}*/
	in >> a;
	in >> b;
	in >> aa;
	cout << a << endl;
	cout << b << endl;
	cout << aa << endl;
}