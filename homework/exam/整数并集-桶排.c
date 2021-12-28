//
// Created by Matrix on 2021/12/13.
//
#include<stdio.h>
int main() {
    int x,y,n;
    scanf("%d%d",&x,&y);
    int a[10000] = {0};
    for (int i = 0; i < x + y; ++i) {
        scanf("%d",&n);
        ++a[n+5000];
    }
    for (int i = 0; i < 10000; ++i) {
        if (a[i] != 0) printf("%d ",i - 5000);
    }
    return 0;
}