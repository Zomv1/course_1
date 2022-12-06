#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// #17
int main()
{
    int b;
    double a, x, res;
    printf("Введите x, a и b:");
    scanf_s("%lf %lf %i", &x, &a, &b);
    if(pow(a*x, b) < 0) {
        printf("Функция не определена");
    }
    else {
        res = pow(sqrt(pow(a*x, b)), 2);
        printf("Результат функции - %lf", res);
    }
    return 0;
}
