//
// Created by Matrix on 2021/12/12.
// 70(运行超时)
#include <stdio.h>
int main()
{
    int n,l,r,t,total = 0;
    scanf("%d%d%d%d",&n,&l,&r,&t);
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int sum = 0,x = 0;
            double ave;
            for (int k = -r; k < r + 1; ++k) {
                for (int m = -r; m < r + 1; ++m) {
                    if (i + k >= 0 && j + m >= 0 && i + k < n && j + m < n) {
                        sum += a[i+k][j+m];
                        ++x;
                    }
                }
            }
            ave = (double)sum / x;
            if (ave <= t) ++total;
        }
    }
    printf("%d",total);
    return 0;
}