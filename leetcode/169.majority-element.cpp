//
// Created by Matrix on 2022/3/22.
// 169.多数元素
int majorityElement(int* nums, int numsSize){
    int a[100000] ={0},max = -50000,min = 50000,max_occur = 0,max_num;
    for (int i = 0; i < numsSize; ++i) {
        ++a[nums[i] + 50000];
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }
    for (int i = min + 50000; i <= max + 50000; ++i) {
        if (a[i] > max_occur) max_occur = a[i],max_num = i - 50000;
    }
    return max_num;
}
/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int majorityElement(int* nums, int numsSize){
    int a[100000] ={0},max = -50000,min = 50000,max_occur = 0,max_num;
    for (int i = 0; i < numsSize; ++i) {
        ++a[nums[i] + 50000];
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }
    for (int i = min + 50000; i <= max + 50000; ++i) {
        if (a[i] > max_occur) max_occur = a[i],max_num = i - 50000;
    }
    return max_num;
}
int main()
{
    int nums[] = {3,2,3},numSize = 3; //[2,2,1,1,1,2,2]
    printf("%d", majorityElement(nums,numSize));
    return 0;
}
 */