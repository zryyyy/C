//
// Created by Matrix on 2021/12/4.
// 70(运行超时)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[10001] = {0};
    int c[10001] = {0};
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
        ++b[a[i]];
    }
    int x = 0;
    for (int i = 1; i < 10001; ++i) {
        if (b[i] != 0) c[x] = i,++x;
    }
    int max = 0;
    for (int i = 0; i < x; ++i) {
        int sum = 0;
        int prev = 0;
        if (a[0] >= c[i]) sum = 1,prev = 1; // c[i]表示选取的数字
        for (int j = 1; j < n; ++j) {
            if (prev == 1 && a[j] < c[i]) prev = 0; // 非零段的结尾数字
            if (prev == 0 && a[j] >= c[i]) ++sum,prev = 1; // 非零段的开头数字
        }
        if (sum > max) max = sum;
    }
    printf("%d",max);
    return 0;
}


// 这是一段写不下去的代码
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n]; // a数组保存输入数据
    int b[n]; // b数组保存改变量
    int c[10001] = {0}; // c数组保存在取该下标时出现的非零段
    int length = 1; // 记录b的长度
    // 读入a数组并且把单调的情况去除后存入b数组
    scanf("%d",&a[0]);
    b[0] = 0;
    for (int i = 1; i < n; ++i) {
        scanf("%d",&a[i]);
        b[length] = a[i] - a[i - 1];
        if ((b[length] > 0 && b[length - 1] > 0) || (b[length] < 0 && b[length - 1] < 0) || b[length] == 0) b[length - 1] += b[length];
        else ++length;
    }
//    // 测试输出
//    for (int i = 0; i < length; ++i) {
//        printf("%d ",b[i]);
//    }
    printf("\n");
    int x = a[0]; // x复现数组a中的值
    for (int i = 0; i < length; ++i) {
        if (b[i] > 0) {
            for (int j = 0; j <= b[i]; ++j) c[x + j] += 1;
            x += b[i];
        }
        else {
            for (int j = 0; j <= -b[i]; ++j) c[x - j] += 1;
            x += b[i];
        }
    }
//    // 测试输出
//    for (int i = 0; i < 13; ++i) {
//        printf("%d ",c[i]);
//    }
    return 0;
}
*/

// 50(答案错误，运行超时0.046s)
/*
#include <stdio.h>
int main()
{
    int n,max_a = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
        if (a[i] > max_a) max_a = a[i];
    }
    int i = 0,max = 0,sum;
    while (i < max_a) {
        sum = 0;
        for (int j = 0; j < n - 1; ++j) {
            if (a[j] >= i && a[j+1] < i) sum += 1;
        }
        if (a[n-1] >= i && a[n-2] <= i) sum += 1;
        if (sum > max) max = sum;
        i++;
    }
    printf("%d",max);
    return 0;
}
 */