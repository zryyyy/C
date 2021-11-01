//
// Created by Matrix on 2021/11/1.
//
#include <stdio.h>
int main()
{
    int n,m,num = 0,dir = 0;
    int  x = 0,y = 0;
    printf("Please enter the rows and columns of the matrix:\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int up = 0,down = n,left = 0,right = m;
    while (num < n * m) {
        dir = dir % 4 + 1;
        if (dir == 1) {
            while (y < right) {
                num = num + 1;
                a[x][y] = num;
                y = y + 1;
            }
            y = y - 1;
            up = up + 1;
        }
        else if (dir == 2) {
            x = x + 1;
            while (x < down) {
                num = num + 1;
                a[x][y] = num;
                x = x + 1;
            }
            x = x - 1;
            right = right - 1;
        }
        else if (dir == 3) {
            while (y > left) {
                num = num + 1;
                y = y - 1;
                a[x][y] = num;
            }
            down = down - 1;
        }
        else if (dir == 4) {
            while (x > up) {
                num = num + 1;
                x = x - 1;
                a[x][y] = num;
            }
            y = y + 1;
            left = left + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%02d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}