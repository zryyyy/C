//
// Created by Matrix on 2022/2/9.
// 2006.差的绝对值为K的数对数目
int countKDifference(int* nums, int numsSize, int k){
    int sum = 0;
    for (int i = 0; i < numsSize - 1; ++i) {
        int x = nums[i] + k,y = nums[i] - k;
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[j] == x || nums[j] == y) ++sum;
        }
    }
    return sum;
}

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int countKDifference(int* nums, int numsSize, int k){
    int sum = 0;
    for (int i = 0; i < numsSize - 1; ++i) {
        int x = nums[i] + k,y = nums[i] - k;
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[j] == x || nums[j] == y) ++sum;
        }
    }
    return sum;
}
int main()
{
    int nums[] = {1,2,2,1},numsSize = 4,k = 1;
    printf("%d", countKDifference(nums,numsSize,k));
}
 */