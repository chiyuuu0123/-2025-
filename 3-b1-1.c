/*2352875 ��� �Ź���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    const double Pi = 3.14159;
    double r, h, c, s1, s2, v1, v2;

    printf("������뾶�͸߶�:\n");
    scanf("%lf %lf", &r, &h);
    c = 2 * Pi * r;
    s1 = Pi * r * r;
    s2 = 4 * Pi * r * r;
    v1 = (4.0 / 3.0) * Pi * pow(r, 3);
    v2 = Pi * r * r * h;

    printf("Բ�ܳ�      : %.2lf\n", c);
    printf("Բ���      : %.2lf\n", s1);
    printf("Բ������  : %.2lf\n", s2);
    printf("Բ�����    : %.2lf\n", v1);
    printf("Բ�����    : %.2lf\n", v2);

    return 0;
}
