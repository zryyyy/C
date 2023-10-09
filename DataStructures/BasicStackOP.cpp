//
// Created by Matrix on 2023/3/7.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int n;
        bool error = false;
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; ++j) {
            string op;
            cin >> op;
            if (op == "push") {
                int k;
                cin >> k;
                v.push_back(k);
            } else if (op == "pop") {
                if (v.empty()) {
                    error = true;
                } else {
                    v.pop_back();
                }
            }
        }
        if (error) {
            cout << "error";
        } else {
            for (int & it : v) {
                cout << it << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

//int main() {
//    // 栈是一种重要的数据结构，它具有push k和pop操作。push k是将数字k加入到栈中，pop则是从栈中取一个数出来。
//    // 栈是后进先出的：把栈也看成横向的一个通道，则push k是将k放到栈的最右边，而pop也是从栈的最右边取出一个数。
//    // 假设栈当前从左至右含有1和2两个数，则执行push 5和pop操作示例图如下：
//    //          push 5          pop
//    // 栈   1 2  ------->  1 2 5 ------>  1 2
//    // 现在，假设栈是空的。给定一系列push k和pop操作之后，输出栈中存储的数字。若栈已经空了，仍然接收到pop操作，
//    // 则输出error。
//    int m;
//    cin >> m;
//    for (int i = 0; i < m; ++i) {
//        int n;
//        bool error = false;
//        cin >> n;
//        stack<int> s;
//        for (int j = 0; j < n; ++j) {
//            string op;
//            cin >> op;
//            if (op == "push") {
//                int k;
//                cin >> k;
//                s.push(k);
//            } else if (op == "pop") {
//                if (s.empty()) {
//                    error = true;
//                } else {
//                    s.pop();
//                }
//            }
//        }
//        if (error) {
//            cout << "error" << endl;
//        } else {
//            // 将栈中的元素逆序输出
//            stack<int> s2;
//            while (!s.empty()) {
//                s2.push(s.top());
//                s.pop();
//            }
//            while (!s2.empty()) {
//                cout << s2.top() << " ";
//                s2.pop();
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}