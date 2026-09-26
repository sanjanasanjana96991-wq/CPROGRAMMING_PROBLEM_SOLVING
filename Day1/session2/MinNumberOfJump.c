#include <stdio.h>

int minNumberOfJump(int nums[], int n) {
    int maxReach = 0;
    int jump = 0;
    int currentEnd = 0;

    for (int i = 0; i < n - 1; i++) {
        if (i + nums[i] > maxReach) {
            maxReach = i + nums[i];
        }
        if (i == currentEnd) {
            jump++;
            currentEnd = maxReach;
        }
    }
    return jump;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("%d", minNumberOfJump(nums, n));
    return 0;
}