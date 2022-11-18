#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Задача 2-КР3
int main()
{
    double x = 1.03, a, b, result;
    printf("\n Введите числа a и b через пробел соотвественно:");
    scanf("%lf %lf", &a, &b);
    result = sqrtf(pow(log(a*x-(b/2)), b));
    printf("Результат - %lf", result);
    return 0;
}
