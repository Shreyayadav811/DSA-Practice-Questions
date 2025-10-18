/*
Problem: Selection sort
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Take input from user
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort logic
    // We repeatedly select the smallest element and place it at the beginning
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // assume current index has the minimum value

        //  Find the index of the smallest element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // update minIndex if smaller element is found
            }
        }

        //  Swap the found minimum element with the first element of the unsorted part
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    //  Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
