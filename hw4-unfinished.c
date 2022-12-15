#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// КР5
int SUM(int array[10]) {
	return array[0]+array[1]+array[2]+array[3]+array[4]+array[5]+array[6]+array[7]+array[8]+array[9]+array[10];
}
int MIN(int array[10]) {
	int min_index = 0;
	for(int i = 0; i < 10; i++) {
		if(array[i] < array[min_index]) min_index = i;
	}
	return array[min_index];
}
int main()
{
	int a[10], func_type = 0;
	for(int i = 0; i < 10; i++) {
		printf("a[%i] = ", i);
		scanf("%i", &a[i]);
	}
	int * b = a;
	printf("Выберите функцию (1 - Суммирование элементов массива, 2 - Вывод минимального элемента массива):");
	scanf("%i", &func_type);
	switch (func_type)
	{
	case 1:
		printf("Сумма элементов - %i.", SUM(b));
		break;
	case 2:
		printf("Сумма элементов - %i.", MIN(b));
		break;
	default:
		printf("Неверная функция.");
		break;
	}
}
