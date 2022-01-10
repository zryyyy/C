//
// Created by Matrix on 2022/1/9.
// 35.搜索插入位置
int searchInsert(int* nums, int numsSize, int target){
    int i = 0,j = numsSize - 1;
    if (nums[j] < target) return numsSize; // 防止target大于最右边的数字
    while (i < j) {
        int search = (i + j) / 2; // 对分法
        if (nums[search] < target) i = search + 1;
        else j = search;
    }
    return j;
}

/**
 * 下面是在编译器调试的参考代码
#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target){
    int i = 0,j = numsSize - 1;
    if (nums[j] < target) return numsSize;
    while (i < j) {
        int search = (i + j) / 2;
        if (nums[search] < target) i = search + 1;
        else j = search;
//        if (nums[search] == target) return search;
//        else if (nums[search] < target) i = search + 1;
//        else j = search;
    }
    return j;
}
int main()
{
    int nums[] = {1,3,5,6},numSize = 4,target = 2; // [1,3] 2   [1,3,5,6] 5,2,7,0   [1] 0
    printf("%d", searchInsert(nums,numSize,target));
    return 0;
}
 */
