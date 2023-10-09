//
// Created by Matrix on 2023/4/19.
//
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 用队列对扑克牌排序
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    queue<string> q1[9], q2[4];
    for (int i = 0; i < n; ++i) {
        q1[str[i][1] - '1'].push(str[i]);
    }
//    // 输出队列q1
//    for (int i = 0; i < 9; ++i) {
//
//    }
    int count = 0;
    for (auto & i : q1) {
        cout << "Queue" << ++count << ':';
        while (!i.empty()) {
            string temp = i.front();
            cout << temp << ' ';
            i.pop();
            q2[temp[0] - 'A'].push(temp);
        }
        cout << endl;
    }
    count = 0;
    queue<string> queue;
    for (auto & i : q2) {
        cout << "Queue" << char ('A' + (count++)) << ':';
        while (!i.empty()) {
            string temp = i.front();
            cout << temp << ' ';
            queue.push(temp);
            i.pop();
        }
        cout << endl;
    }
    while (!queue.empty()) {
        cout << queue.front() << ' ';
        queue.pop();
    }

    return 0;
}
