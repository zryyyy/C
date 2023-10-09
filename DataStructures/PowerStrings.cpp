//
// Created by Matrix on 2023/4/26.
//

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main() {
    queue<string> q;
    char s[1000000];
    scanf("%s", s);
    while (strcmp(s, ".") != 0) {
        q.emplace(s);
        scanf("%s", s);
    }
    while (!q.empty()) {
        string str;
        str = q.front();
        q.pop();
        int n = 1; // 初始化n为1表示最坏的情况
        for (int i = 1; i < str.length() - 1; ++i) {
            if (str.length() % i != 0) continue; // 若不是整数倍直接跳过查找
            string temp = str.substr(0, i);
            bool flag = true;
            for (int j = i; j < str.length() - temp.length() + 1; j += (int)temp.length()) {
//                flag = true;
                for (int k = 0; k < temp.length(); ++k) {
                    if (str[j + k] != temp[k]) {
                        flag = false;
                        break;
                    }
                }
                if (!flag) break; // 若有不符则表示当前temp不行
            }
            if (flag) {
                n = (int) str.length() / i;
                break;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}
