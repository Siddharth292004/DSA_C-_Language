#include <iostream>
using namespace std;

int main() {
    int size;
    int newElement;
    int arr[100];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the  " << size << " element in array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "current array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the new element: ";
    cin >> newElement;

    // shift elements to right
    for(int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newElement;
    size++; 
    cout << "New array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;


}