//
// Created by Matrix on 2022/3/19.
// 125.验证回文串
bool isPalindrome(char * s){
    int left = 0,right = (int)strlen(s) - 1;
    while (left < right) {
        if ((s[left] >= 'A' && s[left] <= 'Z')) s[left] += 32;
        if ((s[right] >= 'A' && s[right] <= 'Z')) s[right] += 32;
        if (!((s[left] >= 'a' && s[left] <= 'z') || (s[left] >= '0' && s[left] <= '9'))) ++left;
        else if (!((s[right] >= 'a' && s[right] <= 'z') || (s[right] >= '0' && s[right] <= '9'))) --right;
        else if (s[left] == s[right]) ++left,--right;
        else return false;
    }
    return true;
}

/**
 * 下面是在IDE调试的参考代码
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(char * s){
    int left = 0,right = (int)strlen(s) - 1;
    while (left < right) {
        if ((s[left] >= 'A' && s[left] <= 'Z')) s[left] += 32;
        if ((s[right] >= 'A' && s[right] <= 'Z')) s[right] += 32;
        if (!((s[left] >= 'a' && s[left] <= 'z') || (s[left] >= '0' && s[left] <= '9'))) ++left;
        else if (!((s[right] >= 'a' && s[right] <= 'z') || (s[right] >= '0' && s[right] <= '9'))) --right;
        else if (s[left] == s[right]) ++left,--right;
        else return false;
    }
    return true;
}
int main()
{
    char s[] = "race a car"; // "A man, a plan, a canal: Panama" "race a car" "0P"
    printf(isPalindrome(s) ? "true" : "false");
    return 0;
}
 */