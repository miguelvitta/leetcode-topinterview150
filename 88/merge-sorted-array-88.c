#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);
void printArray(int* arr, int size);

int main() {
    // Test Case 1
    int nums1_1[] = {1, 2, 3, 0, 0, 0};
    int m1 = 3;
    int nums2_1[] = {2, 5, 6};
    int n1 = 3;
    printf("Test Case 1:\n");
    printf("Before: nums1 = ");
    printArray(nums1_1, 6);
    printf("\tnums2 = ");
    printArray(nums2_1, 3);
    merge(nums1_1, 6, m1, nums2_1, 3, n1);
    printf("After:  nums1 = ");
    printArray(nums1_1, 6);
    printf("\n");

    // Test Case 2
    int nums1_2[] = {1};
    int m2 = 1;
    int nums2_2[] = {};
    int n2 = 0;
    printf("Test Case 2:\n");
    printf("Before: nums1 = ");
    printArray(nums1_2, 1);
    printf("\tnums2 = ");
    printArray(nums2_2, 0);
    merge(nums1_2, 1, m2, nums2_2, 0, n2);
    printf("After:  nums1 = ");
    printArray(nums1_2, 1);
    printf("\n");

    // Test Case 3
    int nums1_3[] = {0};
    int m3 = 0;
    int nums2_3[] = {1};
    int n3 = 1;
    printf("Test Case 3:\n");
    printf("Before: nums1 = ");
    printArray(nums1_3, 1);
    printf("\tnums2 = ");
    printArray(nums2_3, 1);
    merge(nums1_3, 1, m3, nums2_3, 1, n3);
    printf("After:  nums1 = ");
    printArray(nums1_3, 1);
    printf("\n");

    return 0;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m + n - 1;
    int j = m - 1;
    int k = n - 1;
    while (k >= 0) {
        if ((j >= 0) &&  (nums1[j] > nums2[k])) {
            nums1[i] = nums1[j];
            j--;
        }
        else {
            nums1[i] = nums2[k];
            k--;
        }
        i--;
    }
}

void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("]\n");
}

