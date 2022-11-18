#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Задача КР2
int main()
{
    printf("a  b  a&&b a||b  !a\n");
    int a = 0, b = 0;
    while (a != 2) {
        b = 0;
        while (b != 2) {
            printf("%i, %i,  %i,   %i,    %i\n", a, b, a&&b, a||b, !a);
            b++;
        }
        a++;
    }
    return 0;
}
