#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// Задача ЛР1
int main()
{
    system("chcp 1251");
    double back_wall_h, back_wall_w, back_wall_thickness=0.005, side_wall_h, side_wall_d, side_wall_thickness=0.0015, bot_wall_w, bot_wall_d, bot_wall_thickness=.0015, doors_h, doors_w, doors_thickness=0.001; // Информация о досках шкафа
    double dsp_density = 550, dvp_density = 800 wood_density = 550; // Плотности материалов в кг/м^3 
    double result; // Переменная в которую будет записан результат
    // double volume_dps, volume_dvp, volume_wood; // Объемы материалов для подсчет плотности
    back_wall_info:
        printf("Введите свойства накладной задней стенки через пробел: высота(180-220) и ширина(80-120) в сантиметрах соотвественно:");
        scanf_s("%lf %lf", &back_wall_h, &back_wall_w);
    if(back_wall_h < 180 || back_wall_h > 220) {
        printf("\nВведите корректную высоту стенки(180-220 см)");
        goto back_wall_info;
    }
    else if(back_wall_w < 80 || back_wall_w > 120) {
        printf("\nВведите корректную ширину стенки(80-120 см)");
        goto back_wall_info;
    }
    back_wall_h = back_wall_h/100;
    back_wall_w = back_wall_w/100;
    side_wall_info:
        printf("\nВведите свойства боковин через пробел: высоту и глубину(50-90) в сантиметрах соотвественно:");
        scanf_s("%lf %lf", &side_wall_h, &side_wall_d);
    if(side_wall_d < 50 || side_wall_d > 90) {
        printf("\nВведите корректную глубину бокивины(50-80 см)");
        goto side_wall_info;
    }
    else if(side_wall_h <= 0) {
        printf("\nВведите корректную высоту боковины");
        goto side_wall_info;
    }
    side_wall_h = side_wall_h/100;
    side_wall_d = side_wall_d/100;
    bot_wall_info:
        printf("\nВведите свойства верхней и нижней крышек через пробел: ширину и глубину в сантиметрах соотвественно:");
        scanf_s("%lf %lf", &bot_wall_w, &bot_wall_d);
    if(bot_wall_w <= 0 || bot_wall_d <= 0) {
        printf("\nВведите корректные свойства крышек");
        goto side_wall_info;
    }
    bot_wall_d = bot_wall_d/100;
    bot_wall_w = bot_wall_w/100;
    doors_info:
        printf("\nВведите свойства дверей шкафа через пробел: высоту и ширину в сантиметрах соотвественно:");
        scanf_s("%lf %lf", &doors_h, &doors_w);
    if(doors_h <= 0 || doors_w <= 0) {
        printf("\nВведите корректные свойства дверей");
        goto doors_info;
    }
    doors_h = doors_h/100;
    doors_w = doors_w/100;

    result = dvp_density*(back_wall_h*back_wall_w*back_wall_thickness)+dsp_density*(2*(side_wall_h*side_wall_d*side_wall_thickness)+2*(bot_wall_d*bot_wall_w*bot_wall_thickness)+floor(back_wall_h/40)*(bot_wall_d*side_wall_d*side_wall_thickness))+wood_density*(2*(doors_h*doors_w*doors_thickness));
    printf("Масса шкафа - %lf", result):

    printf("\n");
    system("pause");
    return 0;
}
