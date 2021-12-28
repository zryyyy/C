//
// Created by Matrix on 2021/12/26.
// 100
#include <stdio.h>
int main()
{
    int n,N,x = 0,sum = 0;
    scanf("%d%d",&n,&N);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < N; ++i) {
        if (a[x] == i) ++x;
        sum += x;
    }
    printf("%d\n",sum);
    return 0;
}
