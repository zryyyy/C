//
// Created by Matrix on 2021/11/29.
//
#include <stdio.h>
int main()
{
    int a,b,i = 2;
    scanf("%d%d",&a,&b);
    while (i <= a) {
        if (a % i == 0 && b % i == 0) a /= i,b /= i;
        else i++;
    }
    printf("%d %d",a,b);
    return 0;
}