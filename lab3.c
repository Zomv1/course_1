#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// ЛР3
int main()
{
	int random_num = rand() % 1000, guess;
	printf("Введите Вашу догадку(загаданное число в диапазоне 0-1000):");
	do{
		scanf("%i", &guess);
		if(guess < random_num) printf("\n Ваше число меньше, введите новое: \n");
		else if(guess > random_num) printf("\n Ваше число больше, введите новое: \n");
		else printf("\nВы угадали!");
	} while(guess != random_num);
    return 0;
}
