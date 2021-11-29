//
// Created by Matrix on 2021/11/29.
//
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n++;
    int a[15][15] = {0};
    //i列j行
    for (int i = 0; i < 15; ++i) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 1; i < 15; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        int x = n - i;
        for (int j = 0; j < x; ++j) {
            printf("  ");
        }
        for (int j = 0; j < i + 1; ++j) {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}