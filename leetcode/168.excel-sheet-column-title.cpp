//
// Created by Matrix on 2022/3/21.
// 168.Excel表列名称
/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 注意：返回的数组必须被malloced，假设调用者调用free()
 */
// 用空间换性能(虽然并没有换到多少)
char * convertToTitle(int columnNumber){
    char* column = (char*)malloc(sizeof(char) * 20);
    int i = 0; // 除数倒取余法
    while (columnNumber != 0) {
//        column = (char *)realloc(column,(i + 2) * sizeof(int));
        column[i] = (char)((columnNumber - 1) % 26 + 65);
        columnNumber = (columnNumber - column[i] + 64) / 26;
        i += 1;
    }
    column = (char *) realloc(column,sizeof(char) * (i + 1));
    column[i] = 0;
    int left = 0,right = i -1;
    char swap; // reverse↓
    while (left < right) swap = column[left],column[left++] = column[right],column[right--] = swap;
    return column;
}
/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
#include <malloc.h>
char * convertToTitle(int columnNumber){
    char* column = (char*)malloc(sizeof(char));
    int i = 0; // 除数倒取余法
    while (columnNumber != 0) {
        column = (char *)realloc(column,(i + 2) * sizeof(int));
        column[i] = (char)((columnNumber - 1) % 26 + 65);
        columnNumber = (columnNumber - column[i] + 64) / 26;
        i += 1;
    }
    column[i] = 0;
    int left = 0,right = i -1;
    char swap; // reverse↓
    while (left < right) swap = column[left],column[left++] = column[right],column[right--] = swap;
    return column;
}
int main()
{
    int columnNumber = 2147483647;
    printf("%s", convertToTitle(columnNumber));
    return 0;
}
 */

