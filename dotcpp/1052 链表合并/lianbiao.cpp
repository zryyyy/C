//
// Created by Matrix on 2021/12/28.
// 因为直接一维数组直接能做了，就没有用链表
#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[200] = {0};
    for (int i = 0; i < n + m; ++i) {
        int x,y;
        scanf("%d%d",&x,&y);
        a[x] = y;
    }
    for (int i = 0; i < 200; ++i) {
        if (a[i] != 0) printf("%d %d\n",i,a[i]);
    }
    return 0;
}