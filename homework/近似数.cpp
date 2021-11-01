//
// Created by Matrix on 2021/11/1.
//
#include <stdio.h>
#include <math.h>
int main()
{
    double pi1 = 2,n = 0.0,e,min,pi;
    scanf("%lf",&e);
    min = e - pi1;
    while (true) {
        n = n + 1;
        pi1 *= 2 * n / (2 * n - 1) * 2 * n / (2 * n + 1);
        if (fabs(e - pi1) <= min) {
            min = fabs(pi1 - e);
            pi = pi1;
            //n = n + 1;
        }
        else break;
    }
    printf("%.9lf %.0f",pi,n - 1);
    return 0;
}

