//
// Created by Matrix on 2021/10/29.
//
#include <stdio.h>
int main()
{
    long n;
    short a[6];
    printf("������һ����λ����");
    scanf("%ld",&n);
    for (int i = 1; i < 6; ++i) {
        a[i]=n%10;
        n/=10;
    }
    for (int i = 5; i > 1; --i) {
        printf("%hd ",a[i]);
    }
    printf("%hd\n",a[1]);
    n = 0;
    for (int i = 1; i < 6; ++i) {
        n = n*10 + a[i];
    }
    printf("%ld",n);
    return 0;
}
