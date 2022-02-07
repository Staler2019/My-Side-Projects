/**
 * @file quickSort.cpp
 * @author Staler2019 (github.com/Staler2019)
 * @brief Quick Sort
 * @version 1
 * @date 2021-05-12
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
using namespace std;

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void swap(int& a, int& b) {
    if (a == b) return;
    a ^= b;
    b ^= a;
    a ^= b;
}

void printTest() {
    for (auto& i : arr) cerr << i << " \t";
    cerr << endl;
}

void printT(int arr[], int size, int lp, int rp) {
    for (int i = 0; i < size; i++) cerr << arr[i] << "\t";
    cerr << endl;

    bool change = 0;
    if (rp < lp) {
        swap(rp, lp);
        change = 1;
    }
    for (int i = 0; i < lp; i++) cout << "\t";
    cerr << (change ? "rp" : "lp") << "\t";
    for (int i = lp; i < rp - 1; i++) cerr << "\t";
    cerr << (change ? "lp" : "rp") << endl;
}

void quickSort(int* arr, int size) {
    if (size < 2) return;

    int lp = 0, rp = size - 2, pivot = size - 1;
    while (lp <= rp) {
        while (arr[lp] < arr[pivot] && lp <= rp) lp++;
        while (arr[rp] > arr[pivot] && lp <= rp) rp--;
        if (lp >= rp) break;
        swap(arr[lp], arr[rp]);
    }
    swap(arr[lp], arr[pivot]);

    quickSort(arr, lp);
    quickSort(arr + (lp + 1), size - (lp + 1));
}

int main() {
    cout << "Before:";
    for (auto& i : arr) cout << " " << i;
    cout << "\n";
    int arrSize = sizeof(arr) / sizeof(int);
    quickSort(arr, arrSize);
    cout << "After:";
    for (auto& i : arr) cout << " " << i;
}