/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

Constraints:
nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109

Follow up: Can you come up with an algorithm that runs in O(m + n) time?
*/
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
    int len = m + n;
    for (int i = len - 1, j = m - 1, k = n - 1; i >= 0; i--) {
        if ((j > 0) && (nums1[j] >= nums2[k])) {
            nums1[i] = nums1[j];
            j--;
        } else if ((k > 0) && (nums2[k] >= nums1[j])) {
            nums1[i] = nums2[k];
            k--;
        } else if (m == 0) {
            nums1[i] = nums2[k];
        }
    }
}

void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(",");
    }
    printf("]\n");
}

