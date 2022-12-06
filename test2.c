#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// КР 2 - Задача 1
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

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// КР 2 - Задача 2
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
    int * c = 1;
    printf("\n &x = %i", &c);

    return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// КР 2 - Задача 3
int main()
{
    int a = -1;
    int b = -1;
    printf("\n  %i", a*a);
    a = 3;
    b = 2;
    printf("\n  %i", a/b);
    double c = 3.0;
    double d = 2.0;
    printf("\n  %i", c / d);
    printf("\n  %i", a % b);
    printf("\n  %i", a + b);
    printf("\n  %i", a - b);
    printf("\n  %i", a < b);
    printf("\n  %i", a > b);
    printf("\n  %i", a <= b);
    printf("\n  %i", a >= b);
    printf("\n  %i", a == b);
    printf("\n  %i", a != b);
    printf("\n  %i", a << b);
    a = 7;
    printf("\n  %i", a >> b);
    a = 3;
    printf("\n  %i", a & b);
    printf("\n  %i", a | b);
    printf("\n  %i", a ^ b);
    printf("\n  %i", a && b);
    printf("\n  %i", a || b);
    a = 1;
    b = 2;
    c = 2.0;
    d = 0.5;
    printf("\n  %i", (a, b, c+d));
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// КР 2 - Задача 4
int main()
{
    int k = 2;
    printf("\n = %i", k);
    k += 2;
    printf("\n += %i", k);
    k -= 2;
    printf("\n -= %i", k);
    k *= 3;
    printf("\n *= %i", k);
    k /= 2;
    printf("\n /= %i", k);
    k %= 2;
    printf("\n %= %i", k);
    k <<= 2;
    printf("\n <<= %i", k);
    k >>= 2;
    printf("\n >>= %i", k);
    k &= 2;
    printf("\n &= %i", k);
    k != 2;
    printf("\n != %i", k);
    k ^= 2;
    printf("\n ^= %i", k);
    return 0;
}
