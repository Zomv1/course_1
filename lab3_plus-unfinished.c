#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef NAN
#endif
// ЛР3+
int main()
{
	FILE *file;
	file = fopen("/", "r");
	int words_counter = 0, numbers_counter = 0, last_symbol_type=0; //Читаем поток по символу, тип 0 - пробел, табуляция; тип 1 - слово; тип 2- число
	while(getchar()!="\n") {
		printf("%c", getchar());
	}
}
