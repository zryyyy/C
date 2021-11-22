//
// Created by Matrix on 2021/11/22.
//
#include <stdio.h>
int main()
{
    int n,m,swap,sum,flag = 1;
    scanf("%d",&m);
    int a[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int b[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&b[i]);
    }
    sum = m + n;
    int c[sum];
    for (int i = 0; i < m; ++i) {
        c[i] = a[i];
    }
    for (int i = 0; i < n; ++i) {
        c[m+i] = b[i];
    }
    for (int i = 0; i < sum / 2 - 1; ++i) {
        for (int j = 0; j < sum / 2 - 1 - i; ++j) {
            if (c[2*j+1]<c[2*(j+1)+1]) {
                swap = c[2*j+1];
                c[2*j+1] = c[2*(j+1)+1];
                c[2*(j+1)+1] = swap;
                swap = c[2*j];
                c[2*j] = c[2*(j+1)];
                c[2*(j+1)] = swap;
            }
        }
    }
    while (flag) {
        flag = 0;
        int i;
        for (i = 0; i < sum / 2 - 1; ++i) {
            if (c[2*i+1]==c[2*(i+1)+1]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            c[2*i] += c[2*(i+1)];
            for (int j = i + 1; j < sum / 2 - 1; ++j) {
                c[2*j] = c[2*(j+1)];
                c[2*j+1] = c[2*(j+1)+1];
            }
            sum -= 2;
        }
    }
    for (int i = 0; i < sum; ++i) {
        printf("%d ",c[i]);
    }
    return 0;
}