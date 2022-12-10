#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// ДЗ_3
int main()
{
	double min_side_1, wardrobe_w, wardrobe_h, wardrobe_l, door_w, door_h;
    printf("Введите параметры шкафа в сантиметрах через пробел:");
    scanf_s("%lf %lf %lf", &wardrobe_w, &wardrobe_h, &wardrobe_l);
    printf("\nВведите размеры двери в сантимерах через пробел:");
    scanf_s("%lf %lf", &door_w, &door_h);
	printf("\n");
    if(fmin(wardrobe_h, wardrobe_l) <= fmin(door_w, door_h)) {
        if(fmax(wardrobe_h, wardrobe_l) <= fmax(door_w, door_h)) printf("Шкаф пройдет");
		else if(fmax(wardrobe_l, wardrobe_w) <= fmax(door_w, door_h)) printf("Шкаф пройдет");
		else printf("Шкаф не пройдет");
    }
    else if(fmin(wardrobe_h, wardrobe_w) <= fmin(door_w, door_h)) {
		if(fmax(wardrobe_h, wardrobe_w) <= fmax(door_w, door_h)) printf("Шкаф пройдет");
		else if (fmax(wardrobe_l, wardrobe_w) <= fmax(door_w, door_h)) printf("Шкаф пройдет");
		else printf("Шкаф не пройдет");
    }
	else printf("Шкаф не пройдет");
    return 0;
}
