//
// Created by Matrix on 2021/11/8.
//
#include <stdio.h>
int max(int x,int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a[20],b[20],c[20];
    int i = 0,j = 0,n = 0,swap;
    for (int k = 0; k < 20; ++k) {
        a[k] = 0;
        b[k] = 0;
        c[k] = 0;
    }
    while (true) {
        scanf("%d",&a[i]);
        if (a[i] == -1) break;
        i = i + 1;
    }
    while (true) {
        scanf("%d",&b[j]);
        if (b[j] == -1) break;
        j = j + 1;
    }
    for (int k = 0; k < j; ++k) {
            for (int l = 0; l < i; ++l) {
                if (a[k] == b[l]) {
                    c[n] = a[k];
                    n = n + 1;
                    break;
                }
            }
    }
    for (int k = 0; k < n - 1; ++k) {
        for (int l = 0; l < n - 1 - k; ++l) {
            if (c[l] > c[l+1]) {
                swap = c[l];
                c[l] = c[l+1];
                c[l+1] = swap;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        printf("%d ",c[k]);
    }
    return 0;
}
