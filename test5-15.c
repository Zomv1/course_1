#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// КР5
int main()
{
	int a[10], b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, max=-2147483648, max_index=-1;
	for(int i = 0; i < 10; i++) {
		printf("a[%i] = ", i);
		scanf("%i", &a[i]);
	}
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < i + 1; j++) {
			if(a[i] == a[j]) {
				b[j]++;
			}
		}
	}
	for(int i = 0; i < 10; i++) {
		if(b[i] > max) {
			max = b[i];
			max_index = i;
		}
	}
	printf("Число %i в этом массиве встретилось %i раз(-a).", a[max_index], b[max_index]);
}
