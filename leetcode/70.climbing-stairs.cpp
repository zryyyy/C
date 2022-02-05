//
// Created by Matrix on 2022/1/10.
// 70.爬楼梯
int climbStairs(int n){
    //根据递归算法写出来的递推算法
    if (n == 1) return 1;
    if (n == 2) return 2;
    int a,b = 0,c = 1;
    for (int i = 0; i < n; ++i) {
        a = b;
        b = c;
        c = a + b;
    }
    return c;
}

/**
 * 递归算法，代码最简洁但是超时了
int climbStairs(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;
    else return climbStairs(n - 1) + climbStairs(n - 2);
}
*/

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int climbStairs(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;
    else return climbStairs(n - 1) + climbStairs(n - 2);
}
int main()
{
    int n = 8;
    printf("%d", climbStairs(n));
    return 0;
}
 */