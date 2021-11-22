//
// Created by Matrix on 2021/11/22.
//
#include <math.h>
#include <stdio.h>
int prime(int n) {
    if (n % 2 == 0) return 0;
    for (int i = 3; i < sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n,x = 1;
    scanf("%d",&n);
    int a[500];
    int b[500] = {0};
    for (int i = 2; x < 500; ++i) {
        if (prime(i) == 1) a[x++] = i;
    }
    a[0] = 2;
    int i = 0;
    while(n != 1) {
        if (n % a[i] == 0) {
            n /= a[i];
            b[i] += 1;
        } else i++;
    }
    for (int j = 0; j < x; ++j) {
        if (b[j] == 1) printf("%d ",a[j]);
    }
    return 0;
}