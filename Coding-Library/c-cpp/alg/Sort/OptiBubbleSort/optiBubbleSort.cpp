/**
 * @file optiBubbleSort.cpp
 * @author Staler2019 (github.com/Staler2019)
 * @brief optimize Bubble Sort
 * @version 1
 * @date 2021-05-12
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    if (a == b) return;
    a ^= b;
    b ^= a;
    a ^= b;
}

bool swapB(int arr[], int i, int size) {
    bool swapped = 0;
    for (int j = size - 1; j > i; j--) {
        if (arr[j] < arr[j - 1]) {
            swapped |= 1;
            swap(arr[j - 1], arr[j]);
        }
    }
    return swapped;
}

void optiBubbleSort(int arr[], int size) {
    for (int i = 0; i < size && swapB(arr, i, size); i++)
        ;
}

int main() {
    int arr[] = {1, 3, 4, 5, 9, 2, 1, 2353, 214, 324};
    int size = sizeof(arr) / sizeof(int);
    cout << "Before:";
    for (int &i : arr) cout << " " << i;

    optiBubbleSort(arr, size);

    cout << "After:";
    for (int &i : arr) cout << " " << i;
}