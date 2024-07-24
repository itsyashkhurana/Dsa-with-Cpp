#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element    
        swap(arr[min_idx], arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 90 , 70};
    int n = sizeof(arr) / sizeof(arr[0]);

 /* In this example, sizeof(arr) is the total size of the array, which is 24 bytes 
  (assuming int is 4 bytes on your system). sizeof(arr[0]) is the size of an integer,
   which is 4 bytes. Therefore, n will be calculated as 24 bytes / 4 bytes = 6.     */

    selectionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
