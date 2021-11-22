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
    while(number > 0)                 //number>0是执行循环，当等于0是结束循环
    {
        a[n] = number % 10;
        n++;
        number = number / 10;            //每次处以10，少了一位，n自增一个数
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
