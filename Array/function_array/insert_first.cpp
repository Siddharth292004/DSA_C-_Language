#include <iostream>
using namespace std;

int main() {
    int size;
    int newElement;

    cout << "Enter the current array size : ";
    cin >> size;

    // create array with extra space
    int arr[100];

    cout << "Enter the " << size << " elements in the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Current array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the new element: ";
    cin >> newElement;

    // shift elements to right
    for(int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // insert new element at beginning
    arr[0] = newElement;
    size++;

    cout << "New array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
