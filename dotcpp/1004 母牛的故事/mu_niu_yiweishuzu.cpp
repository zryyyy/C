//
// Created by Matrix on 2021/10/25.
//
#include <stdio.h>
int main()
{
    int n,a[4];  // a[0]成年母牛，a[1]
    a[0]=1,a[1]=0,a[2]=0,a[3]=0;
    while(scanf("%d", &n),n) {
        a[0]=1,a[1]=0,a[2]=0,a[3]=0;
        for (int i=1;i<n;i++) {
            a[0]=a[0]+a[1];
            a[1]=a[2];
            a[2]=a[3];
            a[3]=a[0];
        }
        printf("%d\n",a[0]+a[1]+a[2]+a[3]);
    }
    return 0;
}