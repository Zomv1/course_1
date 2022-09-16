#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    system("chcp 1251");
    double r, R, d;
    printf("Введите длину стороны квадрата - ");
    scanf_s("%lf", &R);
    printf("\nВведите радиус круга - ");
    scanf_s("%lf", &r);
    d = floor(10000*(R * sqrt(2)))/10000;
    printf("\n d = %lf", d);
    printf("\n\n");
    if (r < (R / 2))
        printf("Квадрат внутри круга, но не вписан");
    else if (r >= (R / 2) && r <= (d / 2))
        if (r == R / 2)
            printf("Круг вписан в квадрат");
        else if (r == (d / 2))
            printf("Квадрат вписан в круг");
        else
            printf("Квадрат и круг касаются, но не пересекаются");
    else
        printf("Квадрат в круге, но не вписан");
    printf("\n");
    system("pause");
    return 0;
}
