#include <math.h>// Не отправлять на проверку
#include <stdio.h>// Не отправлять на проверку
#include <stdlib.h>// Не отправлять на проверку
// #3 // Не отправлять на проверку
int main()// Не отправлять на проверку
{// Не отправлять на проверку
    int b;// Не отправлять на проверку
    double a, x, res;// Не отправлять на проверку
    printf("Введите x, a и b:");// Не отправлять на проверку
    scanf("%lf %lf %i", &x, &a, &b);// Не отправлять на проверку
    if(b <= 0 || sin(b+a*x) < 0) {// Не отправлять на проверку
        printf("Функция не определена");// Не отправлять на проверку
    }// Не отправлять на проверку
    else {// Не отправлять на проверку
        res = pow(sin(b+a*x), (1/b)); // sin в радианах, неизвестно правильно ли это? Не отправлять на проверку
        printf("Результат функции - %lf", res);// Не отправлять на проверку
    }// Не отправлять на проверку
    return 0;// Не отправлять на проверку
}// Не отправлять на проверку
