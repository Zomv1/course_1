#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// КР5
int compare(const void *arg1, const void *arg2) {
	const int *ARG1 = arg1, *ARG2 = arg2;
   	return (*ARG1 > *ARG2) - (*ARG1 < *ARG2);
}
int main()
{
	int a[10], b[10], res[20], last_index = 0;
	for(int i = 0; i < 10; i++) {
		printf("a[%i] = ", i);
		scanf("%i", &a[i]);
	}
	for(int i = 0; i < 10; i++) {
		printf("b[%i] = ", i);
		scanf("%i", &b[i]);
	}
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			if(a[i] == b[j]) break;
			else if(j == 9) {
				for(int k = 0; k < last_index; k++) {
					if(a[i] == res[k]) break;
					else if(k == last_index - 1) {
						res[last_index] = a[i];
						last_index++;
					}
				}
			}
		}
	}
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < last_index; j++) {
			if(b[i] == res[j]) break;
			else if(j == last_index - 1) {
				res[last_index] = b[i];
				last_index++;
			}
		}
	}
	qsort(res, last_index, sizeof(int), compare);
	for(int i = 0; i < last_index; i++) {
		printf("res[%i] = %i", i, res[i]);
	}
}
