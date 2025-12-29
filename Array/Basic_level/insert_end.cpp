#include <iostream>
using namespace std;

int main() {

    int size;
    int newelement;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size +1] ;// increase size by 1 to accommodate new element
    for(int i = 0; i <size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the new element to insert: ";
    cin >> newelement;

    arr[size] = newelement; // insert new element at the end
    size++; // increase the size of the array
    cout << "Array after insertion: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}