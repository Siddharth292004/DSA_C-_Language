#include <iostream>
using namespace std;

int main()
{
    int largest = INT_MIN;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " element in array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }

    cout << "Largest element in the array: " << largest << endl;

    return 0;
}