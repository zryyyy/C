//
// Created by Matrix on 2022/1/10.
// 53.最大子数组和
int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i - 1] > 0) nums[i] += nums[i - 1];
        if (nums[i] > max) max = nums[i];
        /**
         * 使用动态规划法
         * 如果前面元素大于0，则将前面元素加到当前元素上
         * 如果前面元素小于0，则将前面元素丢弃
         */
    }
    return max;
}

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i - 1] > 0) nums[i] += nums[i - 1];
        if (nums[i] > max) max = nums[i];
    }
    return max;
}
int main()
{
    int nums[] = {5,4,-1,7,8},numSize = 5; // [-2,1,-3,4,-1,2,1,-5,4] 9    [1] 1
    printf("%d", maxSubArray(nums,numSize));
    return 0;
}
 */