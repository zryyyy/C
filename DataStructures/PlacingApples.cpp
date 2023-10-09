//
// Created by Matrix on 2023/4/12.
//
#include <iostream>

using namespace std;

int cal(int m, int n) {
    if (m == 0 || n == 1) {
        return 1;
    }
    if (m < n) {
        return cal(m, m);
    }
    return cal(m, n - 1) + cal(m - n, n);
}

int main() {
    // 描述
    // 把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）5，1，1和1，5，1 是同一种分法
    // 输入
    // 第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1<=M，N<=10
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        cout << cal(m, n) << endl;
    }
    return 0;
}