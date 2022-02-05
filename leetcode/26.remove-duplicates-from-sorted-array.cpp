//
// Created by Matrix on 2021/12/30.
// 26.删除有序数组中的重复项
int removeDuplicates(int* nums, int numsSize){
    int i = 0,len = numsSize,next = 1;
    if (len == 0) return 0; // 防止在输入中出现空数组的情况
    while (i < len && i + next < numsSize) {
        if (nums[i] == nums[i + next]) ++next,--len;
        else ++i,nums[i] = nums[i + next - 1];
        // ++i使i指向应该存储下一个数组元素的位置
        // 由于i增加了1，所以赋值语句也要相应减去1
    }
    return i + 1;
}

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int removeDuplicates(int* nums, int numsSize){
    int i = 0,len = numsSize,next = 1;
    if (len == 0) return 0;
    while (i < len && i + next < numsSize) {
        if (nums[i] == nums[i + next]) ++next,--len;
        else ++i,nums[i] = nums[i + next - 1];
    }
    return i + 1;
}
int main()
{
    int nums[] = {0,0,1,1,1,2,2,3,3,4}; // [1,1,2] [0,0,1,1,1,2,2,3,3,4] []
    int len = removeDuplicates(nums,10);
    for (int i = 0; i < len; ++i) {
        printf("%d ",nums[i]);
    }
    return 0;
}
 */