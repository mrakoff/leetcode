/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ret = calloc(2, sizeof(int));
    *returnSize = 2;
    int i = 0;
    int j = 0;

    while (i < numsSize) {
        while (j < numsSize)
        {
            if ((nums[i] + nums[j] == target) && i != j)
            {
                ret[0] = i;
                ret[1] = j;
                return (ret);
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (ret);
}
