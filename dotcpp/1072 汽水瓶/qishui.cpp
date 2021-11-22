//
// Created by Matrix on 2021/11/6.
//
#include <stdio.h>

int bottle(int a) {
    if (a == 0 || a == 1) return 0;
    else if (a == 2) return 1;
    else return a / 3 + bottle(a / 3 + a % 3);
}

int main()
{
    int n;
    while (scanf("%d",&n),n) {
        printf("%d\n",bottle(n));
    }
    return 0;
}