#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// Задача №12
int main()
{
    system("chcp 1251");
    double x, y; // Координаты точки
    printf("Введите координату по оси X - ");
    scanf_s("%lf", &x);
    printf("\nВведите координату по оси Y - ");
    scanf_s("%lf", &y);

    if (y >= 4 * x * x - 1 && y <= (cos(x) * 14) / 10 + 2 && ((x <= 0 && y <= 0) || (x <= 0 && y >= 0))) {
        printf("Точка в области");
    }
    else {
        printf("Точне не в области");
    }
    printf("\n");
    system("pause");
    return 0;
}
