#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// #3 
int main()
{
    int b;
    double a, x, res;
    printf("Введите x, a и b:");
    scanf_s("%lf %lf %i", &x, &a, &b);
    if(b <= 0 || sin(b+a*x) < 0) {
        printf("Функция не определена");
    }
    else {
        res = pow(sin(b+a*x), (1/b)); // sin в радианах
        printf("Результат функции - %lf", res);
    }
    return 0;
}
