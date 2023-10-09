//
// Created by Matrix on 2023/3/7.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    stack<int> s;
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && a[s.top()] >= a[i]) {
            s.pop();
        }
        if (s.empty()) {
            cout << -1 << " ";
        } else {
            cout << a[s.top()] << " ";
        }
        s.push(i);
    }
    return 0;
}

//int main()
//{
//    // 给定一个长度为 N 的整数数列，输出每个数左边第一个比它小的数，如果不存在则输出 -1
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        int j = i - 1;
//        while (j >= 0 && a[j] >= a[i]) {
//            j--;
//        }
//        if (j == -1) {
//            cout << -1 << " ";
//        } else {
//            cout << a[j] << " ";
//        }
//    }
//    return 0;
//}