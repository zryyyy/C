//
// Created by Matrix on 2023/3/4.
//
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    // 找出数组中的最大值
//    int maxPos = a[0];
//    for (int i = 1; i < n; ++i) {
//        if (a[i] > maxPos) {
//            maxPos = a[i];
//        }
//    }
//    int presentPos = 0,max = 1;
//    vector<int> v;
//    while (presentPos < maxPos) {
//        for (int i = 1; i < max + 1; ++i) {
//            stack<int> s;
//            int x = i;
//            // 将j的每一位数字压入栈中
//            while (x != 0) {
//                s.push(x % 10);
//                x /= 10;
//            }
//            // 将栈中的数字依次取出存入v中
//            while (!s.empty()) {
//                v.push_back(s.top());
//                s.pop();
//                ++presentPos;
//            }
//        }
//        ++max;
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << v[a[i] - 1] << endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    // 找出数组中的最大值
//    int maxPos = a[0];
//    for (int i = 1; i < n; ++i) {
//        if (a[i] > maxPos) {
//            maxPos = a[i];
//        }
//    }
//    int presentPos = 0,max = 1;
////    vector<int> v;
//    int v[maxPos];
//    while (presentPos < maxPos) {
//        for (int i = 1; i < max + 1; ++i) {
//            stack<int> s;
//            int x = i;
//            // 将j的每一位数字压入栈中
//            while (x != 0) {
//                s.push(x % 10);
//                x /= 10;
//            }
//            // 将栈中的数字依次取出存入v中
//            while (!s.empty() && presentPos < maxPos) {
//                v[presentPos] = s.top();
//                s.pop();
//                ++presentPos;
//            }
//        }
//        ++max;
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << v[a[i] - 1] << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
//        b[i] = 0;
    }
    // 找出数组中的最大值
    int maxPos = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > maxPos) {
            maxPos = a[i];
        }
    }
    int presentPos = 0,max = 1;
//    vector<int> v;
//    int v[maxPos];
    while (presentPos < maxPos) {
        for (int i = 1; i < max + 1; ++i) {
            stack<int> s;
            int x = i;
            // 将j的每一位数字压入栈中
            while (x != 0) {
                s.push(x % 10);
                x /= 10;
            }
            // 将栈中的数字依次取出存入v中
            while (!s.empty() && presentPos < maxPos) {
                for (int j = 0; j < n; ++j) {
                    if (a[j] - 1 == presentPos) b[j] = s.top();
                }
                s.pop();
                ++presentPos;
            }
        }
        ++max;
    }
    for (int i = 0; i < n; ++i) {
        cout << b[i] << endl;
    }
    return 0;
}