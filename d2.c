#include <stdio.h>
#include <math.h>//підключення бібліотек
int main(){
  float x0, y0, R, x1, y1, distance;//оголошення змінних
printf("Введіть координати центру круга (x0, y0) та радіус R:\n");
scanf("%f %f %f", &x0, &y0, &R);
printf("Введіть координати точки A (x1, y1):\n");
scanf("%f %f", &x1, &y1);//введення значень
distance = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
if (distance < R) {
    printf("Точка A знаходиться всередині круга. \n");
} else if (distance > R){
    printf("Точка A знаходиться поза кругом.\n");
} else {
    printf("Точка A знаходиться на окружності круга.\n");
} 
return 0;//кінець програми 
}