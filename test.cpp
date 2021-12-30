//
// Created by Matrix on 2021/10/6.
//
using namespace std;
#include <string.h>
#include <cstdio>
#include <math.h>
#include <iostream>
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
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int len = removeDuplicates(nums,10);
    for (int i = 0; i < len; ++i) {
        printf("%d ",nums[i]);
    }
    return 0;
}