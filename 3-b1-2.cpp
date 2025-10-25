/*2352875 软件 张国雄*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double Pi = 3.14159;
	double r, h, c, s1, s2, v1, v2;

	cout << "请输入半径高度" << endl;
	cin >> r >> h;

	c = 2 * Pi * r;
	s1 = Pi * r * r;
	s2 = 4 * Pi * r * r;
	v1 = 4.0 * Pi * r * r * r / 3.0;
	v2 = Pi * r * r * h;

	cout << setiosflags(ios::fixed) << setprecision(2);

	cout << "圆周长     : "  << c << endl;
	cout << "圆面积     : "  << s1 << endl;
	cout << "圆球表面积 : "  << s2 << endl;
	cout << "圆球体积   : "  << v1 << endl;
	cout << "圆柱体积   : "  << v2 << endl;

	return 0;
}