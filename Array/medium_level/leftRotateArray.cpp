// Q. shift all element to the left by one positionn.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<< "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int first = arr[0];

    for(int i = 0; i < size; i++){
        arr[i] = arr[i+1];
    }
    arr[size - 1] = first;

    cout << "the left rotate element: " <<endl;
    for(int j = 0; j < size; j++){
        cout << arr[j] << " ";
    }

    return 0;
}