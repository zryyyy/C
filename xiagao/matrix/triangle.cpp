//
// Created by Matrix on 2021/11/6.
//
#include <stdio.h>
int main()
{
    int n,num = 0,dir = 0;
    int  x = 0,y = 0;
    printf("Please enter the length of the right-angled side of a right triangle:\n");
    scanf("%d",&n);
    int a[n][n];
    int up = 0,left_down = 0,right = n - 1;
    while (num < (n * (n + 1) / 2) - 1) {
        dir = dir % 3 + 1;
        if (dir == 1) {
            while (y < right) {
                num = num + 1;
                a[x][y] = num;
                y = y + 1;
            }
            up += 1;
        }
        else if (dir == 2) {
            while (y > left_down) {
                num = num + 1;
                a[x][y] = num;
                x = x + 1,y = y - 1;
            }
            right -= 2;
        }
        else if (dir == 3) {
            while (x > up) {
                num = num + 1;
                a[x][y] = num;
                x = x - 1;
            }
            left_down += 1;
        }
    }
    a[x][y] = num + 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            printf("%02d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}