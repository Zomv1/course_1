#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Задача 2-КР2
int main()
{
    int a = -1;
    printf("\n -(-1) = %i", -a);
    printf("\n +(-1) = %i", +a);
    a  = 0;
    printf("\n ~(0) = %i", ~a);
    printf("\n !(0) = %i", !a);
    char text = 'a';
    int d = sizeof(text);
    printf("\n sizeof(char) = %i", d);
    double b = 1.9;
    printf("\n (int)1.9 = %i", (int)b);
    // printf("\n int(1.9) = %i", int(b));
    int * c = 1;
    printf("\n &x = %i", &c);

    return 0;
}
