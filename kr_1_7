#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// Задача №7
int main()
{
    system("chcp 1251");
    double x, y; // Координаты точки
    printf("Введите координату по оси ординат - ");
    scanf_s("%lf", &x);
    printf("\nВведите координату по оси абсцисс - ");
    scanf_s("%lf", &y);


    if ((x <= 1 || x >= -1) && (y <= 1 || y >= 1)) {
        if ((x*x + y*y) >= 1) {
            printf("Точка в области");
        }
        else {
            if ((x >= 0 && y >= 0) || (x <= 0 && y <= 0)) {
                printf("Точка в области");
            }
            else {
                printf("Точка не в области");
            }
        }
    }
    else {
        printf("Точка не в области");
    }
    system("pause");
    return 0;
}
