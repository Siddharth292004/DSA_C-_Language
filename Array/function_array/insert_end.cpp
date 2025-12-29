#include <iostream>
using namespace std;

// &size is used to pass the variable by reference so that any modification
// inside the function affects the original variable.

void insertAtEnd(int arr[], int newElement, int &size){
    arr[size] = newElement;
    size++;
    cout << "New array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[100];int size, newElement;
    cout << "Enter the current array size : ";
    cin >> size;

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

    insertAtEnd(arr,newElement,size);
}