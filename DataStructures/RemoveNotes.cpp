//
// Created by Matrix on 2023/4/26.
//

#include <iostream>

using namespace std;

int main() {
    char temp[200];
    string str;
    while (cin.getline(temp, 200)) {
        str += temp;
        str += '\n';
    }
    int size = (int)str.length();
    int idx = 0;
    while (idx < size) {
        if (str[idx] == '"') {
            while (!(str[idx] != '\\' && str[idx + 1] == '"')) {
                cout << str[idx++];
            }
            cout << str[idx++];
            cout << str[idx++];
        } else if (str[idx] == '/' && str[idx + 1] == '*') {
            idx += 2;
            while (!(str[idx] == '*' && str[idx + 1] == '/')) {
                idx++;
            }
            idx += 2;
        } else {
            cout << str[idx++];
        }
    }
    return 0;
}
