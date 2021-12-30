//
// Created by Matrix on 2021/11/8.
//
#include <stdio.h>
int fact(int a) {
    if (a == 0) return 1;
    else return a * fact(a - 1);
}

int main()
{
    int number,t;
    scanf("%d",&number);
    printf("%d,",number);
    t = number;
    int a[10],n=0,fac=0;
    while(number > 0)         // number > 0 时执行循环 , number = 0 时结束循环
    {
        a[n] = number % 10;
        ++n; // n指向下一个存储位数的位置
        number = number / 10; // number在每次除以10后去除最后一位
    }
    n -= 1;
    for (int i = n; i > 0; --i) {
        printf("%d!+",a[i]);
    }
    printf("%d=!",a[0]);
    for (int i = n; i >= 0; --i) {
        fac += fact(a[i]);
    }
    printf("%d\n",fac);
    if (fac == t) printf("Yes");
    else printf("No");
    return 0;
}
