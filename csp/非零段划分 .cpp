//
// Created by Matrix on 2021/12/4.
// 50(运行超时1.046s)
#include <stdio.h>
int main()
{
    int n,max_a = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
        if (a[i] > max_a) max_a = a[i];
    }
    int i = 0,max = 0,sum;
    while (i < max_a) {
        sum = 0;
        for (int j = 0; j < n - 1; ++j) {
            if (a[j] >= i && a[j+1] < i) sum += 1;
        }
        if (a[n-1] >= i && a[n-2] <= i) sum += 1;
        if (sum > max) max = sum;
        i++;
    }
    printf("%d",max);
    return 0;
}