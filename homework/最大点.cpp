//
// Created by Matrix on 2021/11/15.
//
#include <stdio.h>
int main()
{
    int n,m,i,j,flag;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            flag = 1;
            for (int k = 0; k < n; ++k) {
                if (a[k][j]>a[i][j]) flag = 0;
            }
            for (int k = 0; k < m; ++k) {
                if (a[i][k]>a[i][j]) flag = 0;
            }
            if (flag == 1) printf("%d %d %d\n",a[i][j],i+1,j+1);
        }
    }
    return 0;
}