//
// Created by Matrix on 2021/12/4.
//
#include <stdio.h>
int main()
{
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    int a[n*m],b[l];
    for (int i = 0; i < l; ++i) {
        b[i] = 0;
    }
    for (int i = 0; i < n * m; ++i) {
        scanf("%d",&a[i]);
        b[a[i]] += 1;
    }
    for (int i = 0; i < l; ++i) {
        printf("%d ",b[i]);
    }
    return 0;
}