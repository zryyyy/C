//
// Created by Matrix on 2022/3/20.
// 136.只出现一次的数字
// 位运算(LeetCode官方)
// 异或运算有以下三个性质
// 任何数和 0 做异或运算，结果仍然是原来的数，即 a ⊕ 0 = a
// 任何数和其自身做异或运算，结果是 0，即 a ⊕ a = 0
// 异或运算满足交换律和结合律，即 a ⊕ b ⊕ a = b ⊕ a ⊕ a = b ⊕ ( a ⊕ a ) = b ⊕ 0 = b
// 设a(n)为出现一次的数字
// 根据第三个性质可得: (a(1) ⊕ a(1)) ⊕ (a(2) ⊕ a(2)) ⊕ (a(3) ⊕ a(3)) ⊕ (a(3) ⊕ a(3)) ⊕ (a(4) ⊕ a(4)) ⊕ …… ⊕ a(n)
// 根据前两个性质可得: 0 ⊕ 0 ⊕ 0 ⊕ 0 ⊕ 0 ⊕ 0 ⊕ 0 ⊕ 0 ⊕ 0 ⊕ …… 0 ⊕ a(n)
int singleNumber(int* nums, int numsSize){
    int ret = 0;
    for (int i = 0; i < numsSize; ++i) {
        ret ^= nums[i];
    }
    return ret;
}

/**
 * 数组遍历法
 * 使用数组存储数字出现的次数
 * 遍历数组中的每个数字，如果数组元素的出现次数为0或没出现则查看下一个
 * 如果出现的次数为一次，则输出
int singleNumber(int* nums, int numsSize){
    int a[100000] ={0},max = -50000,min = 50000;
    for (int i = 0; i < numsSize; ++i) {
        ++a[nums[i] + 50000];
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }
    for (int i = min + 50000; i <= max + 50000; ++i) {
        if (a[i] == 1) return i - 50000;
    }
    return 0;
}
*/

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int singleNumber(int* nums, int numsSize){
    int a[100000] ={0},max = -50000,min = 50000;
    for (int i = 0; i < numsSize; ++i) {
        ++a[nums[i] + 50000];
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }
    for (int i = min + 50000; i <= max + 50000; ++i) {
        if (a[i] == 1) return i - 50000;
    }
    return 0;
}
int main()
{
    int nums[] = {2,2,1},numSize = 3; // [-1]
    printf("%d", singleNumber(nums,numSize));
    return 0;
}
 */