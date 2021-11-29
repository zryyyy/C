//
// Created by Matrix on 2021/11/29.
//
#include <stdio.h>
int main()
{
    char a[20],b[20],c[200];
    int i = 0,j = 0,k = 0,l = 0,flag;
    while(scanf("%c", &a[i])&&a[i]!='\n') i++;
    while(scanf("%c", &b[j])&&b[j]!='\n') j++;
    while(scanf("%c", &c[k])&&c[k]!='\n') k++;
    for (int m = 0; m < i; ++m) {
        if (a[m] < 97) a[m] += 32;
    }
    while (c[l] != '\n') {
        if (c[l] != a[0] && c[l] != a[0] - 32) {
            printf("%c", c[l]), l++;
        }
        else {
            flag = 1;
            for (int m = 0; m < i; ++m) {
                if (a[m] != c[l+m] && a[m] != c[l+m] + 32) flag = 0;
            }
            if (flag == 1) {
                for (int m = 0; m < j; ++m) {
                    printf("%c",b[m]);
                }
                l += i;
            } else printf("%c",c[l]),l++;
        }
    }
    return 0;
}