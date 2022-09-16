#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* arv[])
{
    double r,R, d;
    printf("Введите длину стороны квадрата\n");
    scanf("%lf", &R);
    printf("\nВведите радиус круга\n");
    scanf("%lf", &r);
    
    d = R*sqrt(2);
    if(r > (R/2))
        if(r < (d/2))
            printf("\n\nКруг и квадрат касаются, но не вписаны");
        else
            printf("\n\nКвадрат внутри круга, но не вписан");
    else
        if(r == (R/2))
            printf("\n\nКруг вписан в квадрат");
        else
            if(r == (d/2))
                printf("\n\nКвадрат вписан в круг");
            else
                printf("\n\nКруг в квадрате, но не вписан");
    return 0;
}
