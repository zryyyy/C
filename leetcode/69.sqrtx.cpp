//
// Created by Matrix on 2022/1/10.
// 69.Sqrt(x)
int mySqrt(int x){
    if (x == 0) return 0;
    if (x == 1) return 1;
    int l = 0,r = x;
    long key = x;
    while (l <= r) {
        int sqr = (l + r) / 2; // 对分查找
        if (sqr * sqr == key) return sqr;
        else if (sqr * sqr < key) l = sqr + 1;
        else r = sqr - 1;
    }
    if (l == r) return l;
    else return r;
}

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int mySqrt(int x){
    if (x == 0) return 0;
    if (x == 1) return 1;
    int l = 0,r = x;
    long key = x;
    while (l <= r) {
        int sqr = (l + r) / 2;
        if (sqr * sqr == key) return sqr;
        else if (sqr * sqr < key) l = sqr + 1;
        else r = sqr - 1;
    }
    if (l == r) return l;
    else return r;
}
int main()
{
    int x = 6; // 3 4 6 8 2147395599
    printf("%d",mySqrt(x));
    return 0;
}
 */