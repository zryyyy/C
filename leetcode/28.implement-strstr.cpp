//
// Created by Matrix on 2022/1/8.
// 28.实现 strStr()（超出时间限制）
int strStr(char* haystack, char* needle) {
    int n = strlen(haystack), m = strlen(needle);
    for (int i = 0; i + m <= n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return i;
        }
    }
    return -1;
}
/*
int strStr(char * haystack, char * needle){
    if (needle[0] == 0) return 0;
    else if (haystack[0] == 0) return -1;
    int i = 0;
    while (haystack[i] != 0) {
        if (haystack[i] == needle[0]) {
            int flag = 1,j = 1;
            while (flag) {
                if (needle[j] == 0) break;
                if (haystack[i + j] == 0 || haystack[i + j] != needle[j]) flag = 0;
                ++j;
            }
            if (flag) return i;
        }
        ++i;
    }
    return -1;
}
*/
/*
int strStr(char * haystack, char * needle){
    if (needle[0] == 0) return 0;
    else if (haystack[0] == 0) return -1;
    int i = 0;
    while (haystack[i] != 0) {
        int j = 0;
        if (haystack[i] == needle[j]) {
            int flag = 1;
            for (int k = 1; needle[j + k] != 0; ++k) {
                if (haystack[i + k] != needle[j + k] || haystack[i + k] == 0) flag = 0;
                if (flag == 0) break;
            }
            if (flag == 1) return i;
        }
        ++i;
    }
    return -1;
} */

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
#include <string.h>
int strStr(char * haystack, char * needle){
    if (needle[0] == 0) return 0;
    else if (haystack[0] == 0) return -1;
    int i = 0;
    while (haystack[i] != 0) {
        if (haystack[i] == needle[0]) {
            int flag = 1,j = 1;
            while (flag) {
                if (needle[j] == 0) break;
                if (haystack[i + j] == 0 || haystack[i + j] != needle[j]) flag = 0;
                ++j;
            }
            if (flag) return i;
        }
        ++i;
    }
    return -1;
}
int main()
{
    char haystack[] = "hello",needle[] = "ll";
    printf("%d",strStr(haystack,needle));
    return 0;
}
 */