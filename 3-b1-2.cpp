/*2352875 ��� �Ź���*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double Pi = 3.14159;
	double r, h, c, s1, s2, v1, v2;

	cout << "������뾶�߶�" << endl;
	cin >> r >> h;

	c = 2 * Pi * r;
	s1 = Pi * r * r;
	s2 = 4 * Pi * r * r;
	v1 = 4.0 * Pi * r * r * r / 3.0;
	v2 = Pi * r * r * h;

	cout << setiosflags(ios::fixed) << setprecision(2);

	cout << "Բ�ܳ�     : "  << c << endl;
	cout << "Բ���     : "  << s1 << endl;
	cout << "Բ������ : "  << s2 << endl;
	cout << "Բ�����   : "  << v1 << endl;
	cout << "Բ�����   : "  << v2 << endl;

	return 0;
}