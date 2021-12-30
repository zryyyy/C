//
// Created by Matrix on 2021/12/29.
// 1.两数之和
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0;i < numsSize - 1;++i) {
        for (int j = i + 1;j < numsSize;++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = malloc(sizeof(int)*2);
                ret[0] = i,ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return 0;
}