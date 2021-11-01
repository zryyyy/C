//
// Created by Matrix on 2021/10/25.
//
#include <stdio.h>
int niu(int x) {
    int c;
    /* if (x==1)
        c=1;
    else if (x==2)
        c=2;
    else if (x==3)
        c=3;
    else */
    if (x<=3)
        c=x;
    else
        c= niu(x-1)+ niu(x-3);
    return c;
}
int main()
{
    int n;  // n为年份
    while(scanf("%d", &n),n) {
        printf("%d\n", niu(n));
    }
    return 0;
}