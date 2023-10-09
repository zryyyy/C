//
// Created by Matrix on 2023/4/19.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n];
    getchar();
    for (int i = 0; i < n; ++i) {
        getline(cin, str[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (char & j : str[i]) {
            if ((j >= 'A' && j < 'Z') || (j >= 'a' && j < 'z')) {
                j += 1;
            } else if (j == 'z') {
                j = 'a';
            } else if (j == 'Z') {
                j = 'A';
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << str[i] << endl;
    }
    return 0;
}