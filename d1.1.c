#include <stdio.h>
#include <math.h>//підключення бібліотек
int main(){
float b, c; 
double a;//оголошення змінних
printf("Введіть значення b:");
scanf("%f", &b);
printf("Введіть значення c:");
scanf("%f", &c);//введення значень
if(b < -5) a = 2*b*b+c;
if(-5 <= b&&b <= 5) a = c*c / (b*b - 9);
if(b > 5) a = (b*c)*(b*c); 
prlintf("Обчислення: %.2f\n", a);//виведення результатів
return 0;//кінець програми
}
