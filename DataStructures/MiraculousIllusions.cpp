//
// Created by Matrix on 2023/3/3.
//
#include <iostream>

using namespace std;

// 幻方是一个很神奇的N*N矩阵，它的每行、每列与对角线，加起来的数字和都是相同的。
// 我们可以通过以下方法构建一个幻方。（阶数为奇数）
// 1.第一个数字写在第一行的中间
// 2.下一个数字，都写在上一个数字的右上方：
//    a.如果该数字在第一行，则下一个数字写在最后一行，列数为该数字的右一列
//    b.如果该数字在最后一列，则下一个数字写在第一列，行数为该数字的上一行
//    c.如果该数字在右上角，或者该数字的右上方已有数字，则下一个数字写在该数字的下方
//
// 输入
//   一个数字N（N<=20）
// 输出
//   按上方法构造的2N-1 * 2N-1的幻方

int main()
{
    int n;
    cin >> n;
    int size = 2 * n - 1;
    int a[size][size];
    // 将数组初始化为0
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            a[i][j] = 0;
        }
    }
    int count = 1,x = 0,y = size / 2;
    while (count < size * size + 1) {
        a[x][y] = count;
        if (x == 0 && y != size - 1) {
            x = size - 1;
            ++y;
        } else if (y == size - 1 && x != 0) {
            --x;
            y = 0;
        } else if ((a[x - 1][y + 1] != 0) || (x == 0 && y == size - 1)) {
            ++x;
        } else {
            --x;
            ++y;
        }
        ++count;
    }
    // 将结果输出
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}