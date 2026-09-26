#include <stdio.h>

int truckCapacity(int weights[], int n, int d) {
    int left = 0; // max weight
    int right = 0; // sum of all weights

    for (int i = 0; i < n; i++) {
        if (weights[i] > left) {
            left = weights[i];
        }
        right += weights[i];
    }

    int capacity = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int totalDays = 1;
        int currentLoad = 0;

        for (int i = 0; i < n; i++) {
            if (currentLoad + weights[i] > mid) {
                totalDays++;
                currentLoad = weights[i];
            } else {
                currentLoad += weights[i];
            }
        }

        if (totalDays <= d) {
            capacity = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return capacity;
}

int main() {
    int weights[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int d = 5;

    printf("%d", truckCapacity(weights, n, d));

    return 0;
}