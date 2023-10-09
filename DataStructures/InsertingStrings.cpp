//
// Created by Matrix on 2023/4/12.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // 描述
    // 有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
    // 输入
    // 输入包括若干行，每一行为一组测试数据，格式为
    // str substr
    // 其中str和substr之间用一个空格隔开。
    char str[14] = {0}, substr[4] = {0};
    while (cin >> str >> substr) {
        int str_len = int (strlen(str)), sub_len = int (strlen(substr));
        int max = 0;
        // 找到ASCII码最大的字符
        for (int i = 1; i < str_len; ++i) {
            if (str[i] > str[max]) {
                max = i;
            }
        }
        // 后移数组sub_len位以插入substr
        for (int i = str_len + sub_len - 1; i > max + sub_len; --i) {
            str[i] = str[i - sub_len];
        }
        // 插入substr
        for (int i = 0; i < sub_len; ++i) {
            str[max + 1 + i] = substr[i];
        }
        cout << str << endl;
        // 清空str和substr数组
        memset(str, 0, sizeof(str));
        memset(substr, 0, sizeof(substr));
    }
    return 0;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//    string str,substr;
//    while(cin >> str >> substr) {
//        int max = 0;
//        for(int i = 0;i < str.length(); ++i) {
//            if(int(str.at(i)) > int(str.at(max))) {
//                max = i;
//            }
//        }
//        str.insert(max + 1,substr);
//        cout << str << endl;
//    }
//}
