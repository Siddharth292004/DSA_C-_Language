#include <iostream>
using namespace std;

int main(){

    int size;
    int sum = 0;

    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];
    
    cout << "Enter the " << size << " element of the array: ";
    for(int i = 0 ; i < size; i++ )
    {
        cin >> arr[i];
        sum +=arr[i];
    }

    cout << "Sum of array: " << sum << endl;

    return 0;
}