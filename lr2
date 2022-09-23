#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// Задача ЛР2
int main()
{
    system("chcp 1251");
    double x1, x2, y1, y2, r1, r2, dist; // Координаты центров окружности и их радиусы, переменная расстояния
    printf("Введите координату центра окружности 1 по оси ординат - ");
    scanf_s("%lf", &y1);
    printf("\nВведите координату по центра окружности 1 по оси абсцисс - ");
    scanf_s("%lf", &x1);
    printf("Введите радиус окружности 1 - ");
    scanf_s("%lf", &r1);
    printf("Введите координату центра окружности 2 по оси ординат - ");
    scanf_s("%lf", &y2);
    printf("\nВведите координату по центра окружности 2 по оси абсцисс - ");
    scanf_s("%lf", &x2);
    printf("Введите радиус окружности 2 - ");
    scanf_s("%lf", &r2);
    
    dist = pow(fabs(x1-x2), 2)+pow(fabs(y1-y2), 2); // Расстояние между центрами окружностей
    printf("\n");


    if(dist >= fabs(r2-r1) && dist <= r2+r1) {
        if(dist == fabs(r2-r1) || dist == r2+r1) {
            printf("Окружности касаются");
        }
        else {
            printf("Окружности пересекаются");
        }
    }
    else if(dist < fabs(r2-r1)) {
        if(dist == 0 && r1 == r2) {
            printf("Окружности совпадают");
        }
        else if(r1 > r2) {
            printf("Окружность 2 в окружности 1");
        }
        else {
            printf("Окружность 1 в окружности 2");
        }
    }
    else {
        printf("Окружности не касаются")
    }

    printf("\n");
    system("pause");
    return 0;
}
