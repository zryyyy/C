//
// Created by Matrix on 2021/12/8.
// 这个文件现在只写到了校验码之前，校验码之后的内容暂时还没有思路
#include <string.h>
#include <math.h>
#include <stdio.h>
int judge(char x) {
    if (x>96 && x<123) return 1;
    else if (x>64 && x<91) return 2;
    else if (x>47 && x<58) return 3;
    else return 0;
}
int main()
{
    int w,s;
    scanf("%d%d",&w,&s);
    char a[100];
    scanf("%s",a);
    int b[128] = {0},c[100] = {0};
    for (int i = 0;i < 10;++i) {
        b[i+48] = i;
    }
    for (int i = 65;i < 91;++i) {
        b[i] = i - 65;
        b[i+32] = i - 65;
    }
    int length = strlen(a);
    int pre = 2,now;
    int x = 0;
    for (int i = 0;i < length;++i) {
        now = judge(a[i]);
        if (now == pre) c[x] = b[a[i]],++x;
        else {
            if (pre == 1 && now == 2) c[x] = 28,++x,c[x] = 28,++x,c[x] = b[a[i]],++x;
            else if (((pre == 1 || pre == 2) && now == 3) || (pre == 3 && now == 2)) c[x] = 28,++x,c[x] = b[a[i]],++x;
            else if ((pre == 2 || pre == 3) && now == 1) c[x] = 27,++x,c[x] = b[a[i]],++x;
            //else if (pre == 1 && now == 3) c[x] = 28,++x,c[x] = b[a[i]],++x;
            //else if (pre == 2 && now == 1) c[x] = 27,++x,c[x] = b[a[i]],++x;
            //else if (pre == 2 && now == 3) c[x] = 28,++x,c[x] = b[a[i]],++x;
            //else if (pre == 3 && now == 1) c[x] = 27,++x,c[x] = b[a[i]],++x;
            //else if (pre == 3 && now == 2) c[x] = 28,++x,c[x] = b[a[i]],++x;
        }
        pre = now;
    }
    if (x % 2 == 1) c[x] = 29,++x;
    int d[100] = {0};
    int y = x / 2;
    for(int i = 0;i < y;++i) {
        d[i] = c[2*i] * 30 + c[2*i+1];
    }
    int e[100] = {0},add;
    int k = pow(2,s+1),sum;
    if (s == -1) k = 0;
    add = w - (k + y + 1) % w;
    sum = y + add + 1;
    e[0] = sum;
    for (int i = 1;i < y + 1;++i) {
        e[i] = d[i-1];
    }
    for (int i = y + 1; i < y + 1 + add; ++i) {
        e[i] = 900;
    }
    for (int i = 0;i < sum;++i) {
        printf("%d\n",e[i]);
    }
    int n = e[0];//r(x) = q(x) * g(x) - x^k * d(x)
    return 0;
}