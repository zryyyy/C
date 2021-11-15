//
// Created by Matrix on 2021/11/15.
//
#include <stdio.h>
int main()
{
    int i=0,j,flag=1;
    char a[60];
    while (scanf("%c",&a[i]) && a[i]!='\n') {
        i++;
    }
    j = i - 1;
    i = 0;
    while (i<j) {
        if (a[i] != a[j]) flag = 0;
        i++;
        j--;
    }
    if (flag == 1) {
        printf("Yes");
    }
    else printf("No");
    return 0;
}