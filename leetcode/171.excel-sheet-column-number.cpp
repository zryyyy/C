//
// Created by Matrix on 2022/3/24.
// 171.Excel表列序号
int titleToNumber(char * columnTitle){
    int num = 0;
    long multiple = 1;
    for (int i = (int)strlen(columnTitle) - 1; i >= 0 ; --i) {
        int x = columnTitle[i] - 64;
        num += x * multiple;
        multiple *= 26;
    }
    return num;
}
/**
 * 下面是在IDE调试的参考代码
#include <string.h>
#include <stdio.h>
int titleToNumber(char * columnTitle){
    int num = 0;
    long multiple = 1;
    for (int i = (int)strlen(columnTitle) - 1; i >= 0 ; --i) {
        int x = columnTitle[i] - 64;
        num += x * multiple;
        multiple *= 26;
    }
    return num;
}
int main()
{
    char columnTitle[] = "FXSHRXW"; //
    printf("%d", titleToNumber(columnTitle));
    return 0;
}
 */