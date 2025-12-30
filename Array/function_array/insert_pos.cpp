#include <iostream>
using namespace std;

void insertAtPosition(int arr[], int &size, int pos, int newElement) {
    // shift elements to right from the position
    for(int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // insert new element at the specified position
    arr[pos] = newElement;
    size++;

    cout << "New array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[100], size, pos, newElement;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the " << size << " elements in the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Current array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\nEnter the position to insert the new element (0 to " << size << "): ";
    cin >> pos;
    cout << "Enter the element to insert: ";
    cin >> newElement;

    // Shift elements to the right from the position

}