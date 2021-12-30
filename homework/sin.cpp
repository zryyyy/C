//
// Created by Matrix on 2021/11/1.
//
#include <stdio.h>
#include <math.h>
double fact(int a) {
    if (a == 0) return 1;
    else return a * fact(a - 1);
}
int main()
{
    double x,sin = 0;
    int n;
    scanf("%lf%d",&x,&n);
    while (n >= 1) {
        sin += pow(-1,n - 1) * pow(x,2 * n - 1) / fact(2 * n - 1);
        n -= 1;
    }
    printf("%.8lf",sin);
    return 0;
}