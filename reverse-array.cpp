// Iterative C++ program to reverse an array
#include <bits/stdc++.h>;
using namespace std;

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Array Reverse Inbuilt Method
// std::reverse(originalArray, originalArray + length);
