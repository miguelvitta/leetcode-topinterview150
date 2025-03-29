# Merge Sorted Arrays in C

This project implements an in-place merge function in C that combines two sorted integer arrays into a single sorted array. It follows the constraints and requirements of a typical coding interview problem, ensuring correctness and efficiency.

## Problem Description

You are given two integer arrays, `nums1` and `nums2`, sorted in non-decreasing order, along with two integers, `m` and `n`, representing the number of initialized elements in `nums1` and `nums2` respectively.

- `nums1` has a size of `m + n`, with the first `m` elements initialized and the last `n` set to 0 (placeholders).
- `nums2` has `n` initialized elements.
- The goal is to merge `nums2` into `nums1` such that `nums1` becomes a sorted array of `m + n` elements, in-place.

### Constraints

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10⁹ <= nums1[i], nums2[j] <= 10⁹`

## Implementation

The core logic is implemented in:

- `merge-sorted-array-88.c`: Contains the `merge()` function which performs an in-place merge from the end of the array, ensuring an efficient O(m + n) time complexity.

## Build Instructions

A `Makefile` is provided for building and debugging.

### Build

```bash
make
```
Debug Build (with AddressSanitizer)
```bash
make debug
```
Clean Build Artifacts
```bash
make clean
```
Dependencies
clang or any C compiler compatible with -Wall, -Wextra, and -fsanitize=address flags.

Standard C library (libc).

License
This project is open-source and available under the MIT License.
