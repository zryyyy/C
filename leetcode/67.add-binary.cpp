//
// Created by Matrix on 2022/2/13.
// 67.二进制求和
char * addBinary(char * a, char * b){
    int len_a = strlen(a),len_b = strlen(b),swap_num = len_a;
    char * swap = a;
    if (len_a < len_b) a = b,b = swap,len_a = len_b,len_b = swap_num; // 交换后a长b短
    char * ret = (char*)malloc(sizeof(char) * (len_a + 2));
    ret[len_a + 1] = 0; // 在末尾标注字符串的结束标志
    char carry = '0';
    for (int i = 1; i <= len_a; ++i) {
        if (i <= len_b) { // 未超过短数组长度的部分
            if (a[len_a - i] == '1' && b[len_b - i] == '1') { // 两位都是1
                ret[len_a + 1 - i] = carry,carry = '1'; // 通过一行实现两行代码的功能
//                if (carry == '0') ret[len_a + 1 - i] = '0',carry = '1'; // 无进位
//                else ret[len_a + 1 - i] = '1',carry = '1'; // 有进位
            }
            else if (a[len_a - i] == '1' || b[len_b - i] == '1') { // 两位有一位是1
                if (carry == '0') ret[len_a + 1 - i] = '1',carry = '0'; // 无进位
                else ret[len_a + 1 - i] = '0',carry = '1'; // 有进位
            } else ret[len_a + 1 - i] = carry,carry = '0'; // 两位都是0
        } else { // 超过短数组长度的部分
            if (carry == '1') { // 有进位
                if (a[len_a - i] == '1') ret[len_a + 1 - i] = '0',carry = '1';
                else ret[len_a + 1 - i] = '1',carry = '0';
            } else ret[len_a + 1 - i] = a[len_a - i];
        }
    }
    if (carry == '1') ret[0] = '1';
    else ++ret;  // 舍弃ret数组开头的'0'
    return ret;
}

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
#include <string.h>
char * addBinary(char * a, char * b){
    int len_a = strlen(a),len_b = strlen(b),swap_num = len_a;
    char * swap = a;
    if (len_a < len_b) a = b,b = swap,len_a = len_b,len_b = swap_num; // 交换后a长b短
    char * ret = (char*)malloc(sizeof(char) * (len_a + 2));
    ret[len_a + 1] = 0; // 在末尾标注字符串的结束标志
    char carry = '0';
    for (int i = 1; i <= len_a; ++i) {
        if (i <= len_b) { // 未超过短数组长度的部分
            if (a[len_a - i] == '1' && b[len_b - i] == '1') { // 两位都是1
                ret[len_a + 1 - i] = carry,carry = '1';
//                if (carry == '0') ret[len_a + 1 - i] = '0',carry = '1'; // 无进位
//                else ret[len_a + 1 - i] = '1',carry = '1'; // 有进位
            }
            else if (a[len_a - i] == '1' || b[len_b - i] == '1') { // 两位有一位是1
                if (carry == '0') ret[len_a + 1 - i] = '1',carry = '0'; // 无进位
                else ret[len_a + 1 - i] = '0',carry = '1'; // 有进位
            } else ret[len_a + 1 - i] = carry,carry = '0'; // 两位都是0
        } else { // 超过短数组长度的部分
            if (carry == '1') { // 有进位
                if (a[len_a - i] == '1') ret[len_a + 1 - i] = '0',carry = '1';
                else ret[len_a + 1 - i] = '1',carry = '0';
            } else ret[len_a + 1 - i] = a[len_a - i];
        }
    }
    if (carry == '1') ret[0] = '1';
    else ++ret; // 舍弃ret数组开头的'0'
    return ret;
}
int main()
{
    char a[] = "1",b[] = "111"; // "11""1"  "1010""1011"  "111111""111"  "0""0" "1""111"
    printf("%s", addBinary(a,b));
    return 0;
}
 */