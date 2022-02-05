//
// Created by Matrix on 2022/1/8.
// 27.移除元素
int removeElement(int* nums, int numsSize, int val){
    int i = 0;
    while (i < numsSize) {
        if (nums[i] == val) {
            for (int j = i; j < numsSize - 1; ++j) nums[j] = nums[j + 1];
            --numsSize,--i;
        }
        ++i;
    }
    return numsSize;
}

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int removeElement(int* nums, int numsSize, int val){
    int i = 0;
    while (i < numsSize) {
        if (nums[i] == val) {
            for (int j = i; j < numsSize - 1; ++j) nums[j] = nums[j + 1];
            --numsSize,--i;
        }
        ++i;
    }
    return numsSize;
}
int main()
{
    int nums[] = {0,1,2,2,3,0,4,2}; // [0,1,2,2,3,0,4,2] [3,2,2,3]
    int numSize = 8,val = 2;
    int len = removeElement(nums,numSize,val);
    for (int i = 0; i < len; ++i) {
        printf("%d ",nums[i]);
    }
    return 0;
}
 */