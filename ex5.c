#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//Задание 1
int main() {
    double pi = 0, a = 1, e = 0.00001;
    int i = 1;

    while (4.0/ i >= e) {
        pi = pi + 4.0 * a / i;
        a = -a;
        i = i + 2;
    }

    printf("Pi = %.5f\n", pi);

    return 0;
}


// Задание 3
//int main() {
//    int a, b, i, j, k, s;
//    scanf("%d", &a);
//
//    i = 0;
//    b = 2;
//    s = 0;
//
//    while (b <= a) {
//        j = 1;
//        k = 0;
//
//        while (j <= b) {
//            if (b % j == 0)
//                k++;
//            j++;
//        }
//
//        if (k == 2) {
//            printf("%d ", b);
//            s++;
//        }
//
//        b++;
//    }
//
//    printf("\nпростых чисел: %d\n", s);
//
//    return 0;
//}
