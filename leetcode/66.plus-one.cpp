//
// Created by Matrix on 2022/1/10.
// 66.加一
/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 注意：返回的数组必须被malloced，假设调用者调用free()
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    for (int i = digitsSize - 1; i >= 0; --i) {
        if (digits[i] == 9)
            digits[i] = 0; // 在碰到9时需要进位
        else {
            ++digits[i]; // 加一
            *returnSize = digitsSize;
            return digits; // 在没有进位时直接结束函数
        }
    }
    // 如果在出循环后还没有结束函数，说明输入的数字是9,99,999……
    // 这类的数字在返回时就比输入的数字多出一位，这就需要使用realloc函数重新分配内存空间
    *returnSize = digitsSize + 1;
    digits = (int *)realloc(digits,*returnSize*sizeof(int));
    digits[0] = 1; // 存放最终进位1
    digits[*returnSize - 1] = 0; // 最后一位为扩充位 需初始化置0
    return digits;
}
/**
 * 下面是在IDE调试的参考代码
 * 挺奇怪的，下面这个代码明明比题解多了这么多无用的判断结果提交以后LeetCode说我内存占用更少
 * 这个函数返回的值是数组名，不是返回数组中元素的个数(returnSize变量)的地址
 * 返回数组元素的个数使用了指向returnSize的指针实现
 * !!一定要记得用realloc函数重新开辟内存空间不然就会报错
#include <stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int carry = 1,flag = 0;
    *returnSize = digitsSize;
    for (int i = digitsSize; i > 0; --i) {
        if (carry == 1) {
            if (digits[i - 1] == 9) {
                digits[i - 1] = 0;
                if (i == 1) flag = 1;
            }
            else digits[i - 1] += 1,carry = 0;
        } else break;
    }
    if (flag == 1) {
        *returnSize += 1;
        digits = (int *)realloc(digits,*returnSize*sizeof(int));
        for (int i = digitsSize; i > 0; --i) {
            digits[i] = digits[i - 1];
        }
        digits[0] = 1;
    }
    return digits;
}
int main()
{
    int digitSize = 4,a[] = {1,8,9,9,0},returnSize;
    int* digits = plusOne(a,digitSize,&returnSize);
    for (int i = 0; i < returnSize; ++i) {
        printf("%d",digits[i]);
    }
}
 */