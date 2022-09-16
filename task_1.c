#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* arv[])
{
    double r,R,d;
    printf("Введите длину стороны квадрата - ");
    scanf("%lf", &R);
    printf("\nВведите радиус круга - ");
    scanf("%lf", &r);
    d = round(R*sqrt(2));
    printf("\nd =%lf", d);
    printf("\nd/2 =%lf", d/2);
    printf("\nr =%lf", r);
    printf("\nR =%lf", R);
    printf("\n\n");
    

    if(r < (R/2))
        printf("Квадрат внутри круга, но не вписан");
    else if(r >= (R/2) && r <= (d/2))
        if(r == R/2)
            printf("Круг вписан в квадрат");
        else if(r == (d/2))
            printf("Квадрат вписан в круг");
        else 
            printf("Квадрат и круг касаются, но не пересекаются");
    else
        printf("Квадрат в круге, но не вписан");
    return 0;
}
