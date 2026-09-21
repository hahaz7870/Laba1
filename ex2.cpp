#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
// Задание 1
// int main()
// {   
//     float a, b, c, d, e, f;
//     float sum, proizv;

//     scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

//     sum = a+b+c+d+e+f;
//     proizv = a*b*c*d*e*f;

//     if(sum>proizv)
//         printf("%f", sum-proizv);

//     else
//         printf("%f", proizv-sum);

//     return 0;

// }


// Задание 2
// int main()
// {
//     float a, b, c, d, e;
//     float sum=0;

//     scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

//     if(a>0) sum = sum+a;
//     if(b>0) sum = sum+b;
//     if(c>0) sum = sum+c;
//     if(d>0) sum = sum+d;
//     if(e>0) sum = sum+e;

//     printf("Сумма = %f", sum);
//     return 0; 

// }

// Задание 3
// int main()
// { 
//     float a, b, c, d;

//     scanf("%f%f%f%f", &a, &b, &c, &d);
//     if(a<0) a = 0;
//     if(b<0) b = 0;
//     if(c<0) c = 0;
//     if(d<0) d = 0;
//     printf("%f %f %f %f", a, b, c, d);
//     return 0;

// }

// Задание 4
// int main(){
//     float a, b, c, d, e, f, g, h;
//     int pos = 0;
//     int neg = 0;

//     scanf("%f%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g, &h);

//     if(a>0) pos++;
//     if(a<0) neg++;

//     if(b>0) pos++;
//     if(b<0) neg++;

//     if(c>0) pos++;
//     if(c<0) neg++;

//     if(d>0) pos++;
//     if(d<0) neg++;

//     if(e>0) pos++;
//     if(e<0) neg++;

//     if(f>0) pos++;
//     if(f<0) neg++;

//     if(g>0) pos++;
//     if(g<0) neg++;

//     if(h>0) pos++;
//     if(h<0) neg++;

//     printf("Положительных: %d\nОтрицательных: %d\n", pos, neg);
//     return 0;
// }

// Задание 5
//int main(){
//    float a, b, c, d;
//    int index = 1;
//    scanf("%f%f%f%f", &a, &b, &c, &d);
//
//    if (b<a) 
//    {
//        index = 2;
//        a=b;
//    }
//    if (c<a) 
//    {
//        index = 3;
//        a=c;
//    }
//    if (d<a) 
//    {
//        index = 4;
//    }
//    printf("порядковый номер  наименьшего  среди них..= %d", index);
//
//    return 0;
//}

// Задание 6
//int main()
//{
//    float a, b, c, d;
//    float max, min;
//
//    printf("Введите 4 числа: ");
//    scanf("%f%f%f%f", &a, &b, &c, &d);
//
//    max = a;
//    min = a;
//
//    if (b > max) max = b;
//    if (c > max) max = c;
//    if (d > max) max = d;
//
//    if (b < min) min = b;
//    if (c < min) min = c;
//    if (d < min) min = d;
//
//    printf("Difference = %.2f", max - min);
//
//    return 0;
//}

//Задание 7
//int main()
//{
//    float K, M, N, temp;
//
//    printf("Введите K, M, N: ");
//    scanf("%f%f%f", &K, &M, &N);
//
//    if (K > M)
//    {
//        temp = K;
//        K = M;
//        M = temp;
//    }
//
//    if (K > N)
//    {
//        temp = K;
//        K = N;
//        N = temp;
//    }
//
//    if (M > N)
//    {
//        temp = M;
//        M = N;
//        N = temp;
//    }
//
//    printf("K = %.2f\n", K);
//    printf("M = %.2f\n", M);
//    printf("N = %.2f", N);
//
//    return 0;
//}

//Задание 8
//int main()
//{
//    float K, M, N, temp;
//
//    printf("Введите K, M, N: ");
//    scanf("%f%f%f", &K, &M, &N);
//
//    if (K > M)
//    {
//        temp = K;
//        K = M;
//        M = temp;
//    }
//
//    if (K > N)
//    {
//        temp = K;
//        K = N;
//        N = temp;
//    }
//
//    if (M > N)
//    {
//        temp = M;
//        M = N;
//        N = temp;
//    }
//
//    printf("K = %.2f\n", K);
//    printf("M = %.2f\n", M);
//    printf("N = %.2f", N);
//
//    return 0;
//}

//Задание 9
//int main()
//{
//    float a, b, c, temp;
//
//    printf("Введите 3 числа: ");
//    scanf("%f%f%f", &a, &b, &c);
//
//    if (a > b && a > c && b < c)
//    {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    else if (a > b && a > c && c < b)
//    {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    else if (b > a && b > c && a < c)
//    {
//        temp = b;
//        b = a;
//        a = temp;
//    }
//    else if (b > a && b > c && c < a)
//    {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//    else if (c > a && c > b && a < b)
//    {
//        temp = c;
//        c = a;
//        a = temp;
//    }
//    else if (c > a && c > b && b < a)
//    {
//        temp = c;
//        c = b;
//        b = temp;
//    }
//
//    printf("%.2f %.2f %.2f", a, b, c);
//
//    return 0;
//}
