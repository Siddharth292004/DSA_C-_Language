#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the " << size << "  element in array: "<< endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << endl;
    
    for(int i = 0; i < size; i++){
        cout << i << " " << endl;
    }

    return 0;
}