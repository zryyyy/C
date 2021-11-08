//
// Created by Matrix on 2021/11/6.
//
#include <stdio.h>
int beishu(long long a) {
    int b = a / 10, c = a % 10;
    a = b - 5 * c;
    if (a % 17 == 0 ) return 1;
    else return 0;
}
int main()
{
    long long n;
    while (scanf("%d",&n),n) {
        printf("%d\n",beishu(n));
    }
    return 0;
}