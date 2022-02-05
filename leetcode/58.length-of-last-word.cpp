//
// Created by Matrix on 2022/1/10.
// 58.最后一个单词的长度
int lengthOfLastWord(char * s){
    // 正向搜索法，sum保存单词的长度，遇到不为0的单词就存到last中
    int i = 0,sum = 0,last = 0;
    while (s[i] != 0) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            sum += 1;
        } else {
            if (sum > 0) last = sum;
            sum = 0;
        }
        ++i;
    }
    if (sum > 0) last = sum;
    return last;
}

/**
 * 反向遍历法
 * 从最后一个字符开始找，找到一个单词后就退出循环
 * 理论上这个方法更节省时间和内存，但是要用到库函数
int lengthOfLastWord(char * s){
    int i = strlen(s),sum = 0;
    while (i >= 0) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            sum += 1;
        } else {
            if (sum > 0) break;
        }
        --i;
    }
    return sum;
}
 */

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
//#include <string.h>
int lengthOfLastWord(char * s){
    int i = 0,sum = 0,last = 0;
    while (s[i] != 0) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            sum += 1;
        } else {
            if (sum > 0) last = sum;
            sum = 0;
        }
        ++i;
    }
    if (sum > 0) last = sum;
    return last;
}
int main()
{
    char s[] = "Hello World"; // "   fly me   to   the moon  " "luffy is still joyboy" "a"
    printf("%d", lengthOfLastWord(s));
    return 0;
}
 */