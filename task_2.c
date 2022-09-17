#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    system("chcp 1251");
    double l,w,h,a,b;
    printf("Введите длину шкафа - ");
    scanf("%lf", w);
    printf("\nВведите ширину шкафа -");
    scanf("%lf", l);
    printf("\nВведите высоту шкафа -");
    scanf("%lf", h);
    printf("\nВведите высоту двери -");
    scanf("%lf", x);
    printf("\nВведите ширину двери -");
    scanf("%lf", y);
    printf("\n\n");


    // РЕШЕНИЕ 1
    if(h <= x) {
        if(w <= y) {
            printf("Пройдет тыльной или задней стороной");
        }
        else if(l <= y) {
            printf("Пройдет боковой стороной");
        }
    }
    else if(h <= y) {
        if(w <= x) {
            printf("Пройдет тыльной или задней стороной");
        }
        else if(l <= x) {
            printf("Пройдет боковой стороной");
        }
    }
    else {
        if(w <= x) {
            if(l <= y) {
                printf("Пройдет верхней или нижней стороной");
            }
            else {
                printf("Не пройдет");
            }
        }
        else if(w <= y) {
            if(l <= x) {
                printf("Пройдет верхней или нижней стороной");
            }
            else {
                printf("Не пройдет");
            }
        }
        else {
            printf("Не пройдет");
        }
    }


    // РЕШЕНИЕ 2
    if((h <= x && w <= y) || (w <= x && h <= y)) {
        printf("Пройдет тыльной или задней стороной");
    }
    else if((h <= x && l <= y) || (l <= x && h <= y)) {
        printf("Пройдет боковой стороной");
    }
    else if((w <= x && l <= y) || (l <= x && w <= y)) {
        printf("Пройдет верхней или нижней стороной");
    }
    else {
        printf("Не пройдет");
    }

    
    system("pause");
    return 0;
}
