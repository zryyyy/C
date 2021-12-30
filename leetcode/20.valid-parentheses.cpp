//
// Created by Matrix on 2021/12/30.
// 20.有效的括号
// prev数组类似于链表，存储上一个左括号的种类
// flag数组用于区分括号种类
bool isValid(char * s){
    int flag[128] = {0},prev[5001] = {0},target = 0,i = 0;
    flag[40] = 1,flag[41] = 1,flag[91] = 2,flag[93] = 2,flag[123] = 3,flag[125] = 3;
    // '(' = 40 , ')' = 41 , '[' = 91 , ']' = 93 , '{' = 123 , '}' = 125
    while(s[i] != 0) {
        if (s[i] == 40 || s[i] == 91 || s[i] == 123) {
            prev[target++] = flag[s[i]];
        }
        else if (s[i] == 41 || s[i] == 93 || s[i] == 125) {
            if (target == 0 || prev[--target] != flag[s[i]]) return false;
            // 这里的 target == 0 用来防止右括号过多  e.g. ')']'''}'
        }
        ++i;
    }
    if (target == 0) return true; // 这里的target防止字符串左括号过多  e.g. '(''[''{'
    else return false;
}

/**
 * 下面是在编译器调试的参考代码
#include <string.h>
#include <stdio.h>
bool isValid(char * s){
    int flag[128] = {0},prev[5001] = {0},target = 0,i = 0;
    flag[40] = 1,flag[41] = 1,flag[91] = 2,flag[93] = 2,flag[123] = 3,flag[125] = 3;
    while(s[i] != 0) {
        if (s[i] == 40 || s[i] == 91 || s[i] == 123) {
            prev[target++] = flag[s[i]];
        }
        else if (s[i] == 41 || s[i] == 93 || s[i] == 125) {
            if (prev[--target] != flag[s[i]]) return false;
        }
        ++i;
    }
    return true;
}
int main()
{
    char s[10000];
    gets(s); // "()" "()[]{}" "(]" "([)]" "{[]}" "[" "]"
    if (isValid(s)) printf("True");
    else printf("False");
    return 0;
}
 */