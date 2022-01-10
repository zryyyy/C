//
// Created by Matrix on 2022/1/10.
//
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] == 9)
            digits[i] = 0;
        else {
            ++digits[i];
            *returnSize = digitsSize;
            return digits;
        }
    }
    *returnSize = digitsSize + 1;
    digits = (int *)realloc(digits,*returnSize*sizeof(int));
    digits[0] = 1; // 存放最终进位1
    digits[*returnSize - 1] = 0; // 最后一位为扩充位 需初始化置0
    return digits;
}