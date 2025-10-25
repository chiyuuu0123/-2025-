/*2352875 软件 张国雄*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    const double Pi = 3.14159;
    double r, h, c, s1, s2, v1, v2;

    printf("请输入半径和高度:\n");
    scanf("%lf %lf", &r, &h);
    c = 2 * Pi * r;
    s1 = Pi * r * r;
    s2 = 4 * Pi * r * r;
    v1 = (4.0 / 3.0) * Pi * pow(r, 3);
    v2 = Pi * r * r * h;

    printf("圆周长      : %.2lf\n", c);
    printf("圆面积      : %.2lf\n", s1);
    printf("圆球表面积  : %.2lf\n", s2);
    printf("圆球体积    : %.2lf\n", v1);
    printf("圆柱体积    : %.2lf\n", v2);

    return 0;
}
