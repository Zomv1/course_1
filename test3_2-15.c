#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Задача 2-КР3 - 15 Куликов
int main()
{
    int b;
    double a, x, y;
    printf("Введите x, a и b через пробел соотвественно:");
    scanf_s("%lf %lf %i", &x, &a, &b);
    if(a * x <= 0 || a * x == 1) {
        printf("Функция не определена");
    }
    else {
        y = logf(pow(3 + b * x, 3)) / logf(a * x);
        printf("Результат функции - %lf", y);
    }
    return 0;
}
