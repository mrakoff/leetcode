/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {

    int* ret = malloc(sizeof(int) * numsSize);
    int sum = 0;
    int i = 0;

    *returnSize = numsSize;
    while (i < numsSize) {
        sum += nums[i];
        ret[i] = sum;
        i++;
    }
    return (ret);
}
