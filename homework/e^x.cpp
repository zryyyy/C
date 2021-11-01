//
// Created by Matrix on 2021/11/1.
//
#include <iostream>
#include <stdio.h>
#include <math.h>
double fact(int a) {
    if (a == 0) return 1;
    else return a * fact(a - 1);
}
int main()
{
    double x,e = 1;
    int n;
    scanf("%lf%d",&x,&n);
    while (n >= 1) {
        e += pow(x,n) / fact(n);
        n -= 1;
    }
    printf("%.6lf",e);
    return 0;
}
