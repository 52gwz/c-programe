/*
给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
#include <stdio.h>
int *twoSum(int *nums, int numsSize, int target); //暂时还不知道C怎么返回两个值
int main()
{
    int nums[] = {3, 2, 4};
    int target = 0;
    printf("Please enter target:");
    scanf("%d", &target);
    int *result = twoSum(nums, 3, target);
    printf("nums[%d] + nums[%d] = %d", *result, *(result + 1), target);
    getchar();
    getchar();
}
int *twoSum(int *nums, int numsSize, int target)
{
    static int ret[2] = {0};
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
    return 0;
}