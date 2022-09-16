#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define MAXLINE 1000
int main()
{
    system("chcp 1251");
    double r, a, d;   // r - радиус круга, a - длина стороны квадрата, d - диаметр квадрата
    char r_str[MAXLINE], a_str[MAXLINE],temp[MAXLINE]; // r_str, a_str - Вводимые строки для переменных r и а | temp - переменная которая будет временно нужны позже
    int i, str_pos,flag; // i - для использования в циклах | str_pos - значение индекса элемента '(' для определения корня, flag - временный флаг
    flag = 0;
    printf("Введите длину стороны квадрата - ");
    scanf("%s", a_str);
    printf("\nВведите радиус круга - ");
    scanf("%s", &r_str);

    printf("\n d = %lf", d);
    printf("\n r = %s", a_str);
    printf("\n\n");

    str_pos = strchr(a_str, '(')-a_str+1;  // Ищем индекс '('

    if(str_pos < 0) {  // Если индекс не найден, то просто конвентируем строку в double
        a = atof(a_str);
    }
    else if(str_pos > 5){
        memmove(a_str, a_str, strlen(a_str)-1); // Удаляем закрывающую ')'
        for(i = 0; i<str_pos-1;i++) {
            a_temp[i] = a_str[str_pos+i];  // Формируем временную строку в которою запишем значение корня
        }
        a = atof(a_str)*sqrt(atof(a_temp)); // Конвертируем строки в double(получим все до '*') и умножаем на корень
    }

    // Тоже самое для значения радиуса
    str_pos = strchr(r_str, '(')-a_str+1;
    if(str_pos <0) {
        r = atof(r_str);
    }
    else {
        memmove(r_str, r_str, strlen(r_str)-1);
        for(i = 0; i<str_pos-1;i++) {
            r_temp[i] = r_str[str_pos+i];
        }
        r = atof(r_str);
        r = atof(r_str)*sqrt(atof(r_temp));
    }

    d = round(10000*(a * sqrt(2)))/10000; // Считаем диагональ до 4 знаков до запятой, ведь перемножаются не корни а 1.414215686... примерно равно 2,00000600653 = 2,0000 c округление до 4 знака
    if (r < (a / 2)) { // Если радиус меньше половины стороны квадрата, то очевидно что
        printf("Круг внутри квадрата, но не вписан");
        }
    else if (r >= (a / 2) && r <= (d / 2)) { // Если радиус находится в границах между половиной стороны квадрата и половиной диагонали, то они касаются
        if (r == a / 2) {
            printf("Круг вписан в квадрат");
        }
        else if (r == (d / 2)) {
            printf("Квадрат вписан в круг");
        }
        else {
            printf("Квадрат и круг касаются, но не пересекаются");
        }
    }
    else // Если же радиус больше стороны квадрата, то очевидно
        printf("Квадрат в круге, но не вписан");
    printf("\n");
    system("pause");
    return 0;
}
