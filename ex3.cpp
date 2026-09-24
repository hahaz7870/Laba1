#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// Задание 1
// int main(int argc, char *argv[])
// {
//     int m;
//     scanf("%d", &m);


//     switch(m)
//     {
//         case 1: case 2: case 3: printf("Первый квартал \n"); break;
//         case 4: case 5: case 6: printf("Второй квартал \n"); break;
//         case 7: case 8: case 9: printf("Третий квартал \n"); break;
//         case 10: case 11: case 12: printf("Четвертый квартал \n"); break;
//         default: printf("Error");
//     }

//     switch(m)
//     {
//         case 12: case 1: case 2: printf("Зима "); break;
//         case 3: case 4: case 5: printf("Весна"); break;
//         case 6: case 7: case 8: printf("Лето"); break;
//         case 9: case 10: case 11: printf("Осень"); break;
//         default: printf("Error");
//     }

//     return 0;
// }

// Задание 2
// int main(){
//     int c;
//     scanf("%d", &c);
//         switch(c){
//             case -9: printf("минус девять"); break;
//             case -8: printf("минус восемь"); break;
//             case -7: printf("минус семь"); break;
//             case -6: printf("минус шесть"); break;
//             case -5: printf("минус пять"); break;
//             case -4: printf("минус четыре"); break;
//             case -3: printf("минус три"); break;
//             case -2: printf("минус два"); break;
//             case -1: printf("минус один"); break;
//             case 0: printf("ноль"); break;
//             case 1: printf("один"); break;
//             case 2: printf("два"); break;
//             case 3: printf("три"); break;
//             case 4: printf("четыре"); break;
//             case 5: printf("пять"); break;
//             case 6: printf("шесть"); break;
//             case 7: printf("семь"); break;
//             case 8: printf("восемь"); break;
//             case 9: printf("девять"); break;
//             default: printf("Error");
//         }
//     return 0;
// }

// Задание 3
// int main(){
//     int year, n;
//     scanf("%d", &year);

//     n = (year - 2008)%12;

//     if(n<0) n = n+12;

//     switch(n){
//         case 0: printf("Крыса"); break;
//         case 1: printf("Корова"); break;
//         case 2: printf("Тигр"); break;
//         case 3: printf("Заяц"); break;
//         case 4: printf("Дракон"); break;
//         case 5: printf("Змея"); break;
//         case 6: printf("Лошадь"); break;
//         case 7: printf("Овца"); break;
//         case 8: printf("Обезьяна"); break;
//         case 9: printf("Петух"); break;
//         case 10: printf("Собака"); break;
//         case 11: printf("Свинья"); break;
//         default: printf("Error");
//     }

//     return 0;
// }


//Задание 4
//int main() {
//    int m, d, t;
//    scanf("%d", &m);
//    scanf("%d", &d);
//
//    switch (m) {
//    case 1: t = d; break;
//    case 2: t = 31 + d; break;
//    case 3: t = 59 + d; break;
//    case 4: t = 90 + d; break;
//    case 5: t = 120 + d; break;
//    case 6: t = 151 + d; break;
//    case 7: t = 181 + d; break;
//    case 8: t = 212 + d; break;
//    case 9: t = 243 + d; break;
//    case 10: t = 273 + d; break;
//    case 11: t = 304 + d; break;
//    case 12: t = 334 + d; break;
//    default: printf("Error");
//    }
//
//    printf("Номер дня в году = %d", t);
//    return 0;
//
//}