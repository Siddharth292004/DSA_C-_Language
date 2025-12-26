#include <iostream>
using namespace std;

int main()
{
    int arr1_size, arr2_size;

    cout << "Enter the size of first array: ";
    cin >> arr1_size;

    int arr1[arr1_size];

    cout << "Enter elements of first array:\n";
    for(int i = 0; i < arr1_size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> arr2_size;

    int arr2[arr2_size];
    int arr3[arr1_size + arr2_size];

    cout << "Enter elements of second array:\n";
    for(int i = 0; i < arr2_size; i++) {
        cin >> arr2[i];
    }

    // Copy first array to arr3
    for(int i = 0; i < arr1_size; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array to arr3
    for(int i = 0; i < arr2_size; i++) {
        arr3[arr1_size + i] = arr2[i];
    }

    cout << "Merged Array:\n";
    for(int i = 0; i < arr1_size + arr2_size; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
