#include <stdio.h>
#include <string.h>
int main(){
int student_number;

printf("Введіть номер студента:");
scanf("%d", &student_number);

//використовуємо оператор switch для визначення прізвища та ім'я студента
switch (student_number){
    case 1:
    printf("Прізвище ім'я: Адабека Назар\n");
    break;
    case 2:
    printf("Прізвище ім'я: Бурковська Богдана\n");
    break;
    case 3:
    printf("Прізвище ім'я: Воробець Андрій\n");
    break;
    case 4:
    printf("Прізвище ім'я: Гавалешко Віталіна\n");
    break;
    case 5:
    printf("Прізвище ім'я: Гакман Олександр\n");
    break;
    case 6:
    printf("Прізвище ім'я: Голунга Максим\n");
    break;
    case 7:
    printf("Прізвище ім'я: Горобієвський Максим\n");
    break;
    case 8:
    printf("Прізвище ім'я: Дирда Михайло\n");
    break;
    case 9:
    printf("Прізвище ім'я: Іванюк Андріян\n");
    break;
    case 10:
    printf("Прізвище ім'я: Ігнатюк Іван\n");
    break;
    case 11:
    printf("Прізвище ім'я: Кіронда Роман\n");
    break;
    case 12:
    printf("Прізвище ім'я: Князький Ігор\n");
    break;
    case 13:
    printf("Прізвище ім'я: Костенюк Любомир\n");
    break;
    case 14:
    printf("Прізвище ім'я: Макух Арсен\n");
    break;
    case 15:
    printf("Прізвище ім'я: Мельницький Майк\n");
    break;
    case 16:
    printf("Прізвище ім'я: Мігалуш Ігор\n");
    break;
    case 17:
    printf("Прізвище ім'я: Мошук Максим\n");
    break;
    case 18:
    printf("Прізвище ім'я: Пилип Георгій\n");
    break;
    case 19:
    printf("Прізвище ім'я: Романко Ілля\n");
    break;
    case 20:
    printf("Прізвище ім'я: Салагуб Дмитро\n");
    break;
    case 21:
    printf("Прізвище ім'я: Соколовський Степан\n");
    break;
    case 22:
    printf("Прізвище ім'я: Тодерян Андрій\n");
    break;
    case 23:
    printf("Прізвище ім'я: Франк Діана-Вікторія\n");
    break;
    case 24:
    printf("Прізвище ім'я: Ткачук Станіслав\n");
    break;
}
return 0;
}