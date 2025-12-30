#include <iostream>
using namespace std;

void insertAtBeginning(int arr[], int &size, int newElement) {
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
}

int main() {
    int arr[100],size,newElement;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the " << size << " elements in the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Current array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "Enter the element to insert at the beginning: ";
    cin >> newElement;

    insertAtBeginning(arr, size, newElement);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}