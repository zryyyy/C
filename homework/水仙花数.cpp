//
// Created by Matrix on 2021/11/8.
//
#include <stdio.h>
int main()
{
    int min, max;
    int x,y,z,sum = 0;
    scanf("%d %d",&min,&max);
    if (min<100) min = 100;
    if (max>999) max = 999;
    for (int i = min; i <= max; ++i) {
        x = i / 100;
        y = ( i % 100 ) / 10;
        z = i % 10;
        if (z*z*z + y*y*y + x*x*x == i) {
            sum += 1;
            printf("%d ",i);
        }
    }
    if (sum == 0) printf("No Answer");
    return 0;
}
