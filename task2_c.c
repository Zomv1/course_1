#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* arv[])
{
    double l,w,h,a,b;
    printf("Введите длину шкафа - ");
    scanf("%lf", &w);
    printf("\nВведите ширину шкафа -");
    scanf("%lf", &l);
    printf("\nВведите высоту шкафа -");
    scanf("%lf", &h);
    printf("\nВведите высоту двери -");
    scanf("%lf", &a);
    printf("\nВведите ширину двери -");
    scanf("%lf", &b);
    printf("\n\n");
    if(l <= a)
        if(w <= b)
            printf("Пройдет верхней или нижней стороной");
        else
            if(h <= b)
                if(w <= a)
                    printf("Пройдет тыльной или задней стороной");
                else
                    printf("Пройдет верхней или нижней стороной");
            else
                printf("Не пройдет");
    else
        if(l<=b)
            if(w <= a)
                ("Пройдет верхней или нижней стороной")
            else
                if(h <= a)
                    if(w <= b)
                        printf("Пройдет боком");
                    else
                        printf("Пройдет тыльной или задней стороной");
                else
                    printf("Не пройдет")
        else
            printf("Не пройдет");
    return 0;
}
