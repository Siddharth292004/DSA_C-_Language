#include <iostream>
using namespace std;

void insertAtPosition(int arr[], int &size, int pos, int newElement)
{
    // shift elements to right
    for(int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // insert element
    arr[pos - 1] = newElement;
    size++;
}

int main()
{
    int arr[100], size, pos, newElement;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Current array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the position (1 to " << size + 1 << "): ";
    cin >> pos;

    cout << "Enter the element to insert: ";
    cin >> newElement;

    insertAtPosition(arr, size, pos, newElement);

    cout << "New array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
