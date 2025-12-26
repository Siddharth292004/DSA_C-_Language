// Count how man element are even and odd.

#include <iostream>
using namespace std;

int main()
{
    int size;
    int countEven = 0;
    int countOdd = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the " << size <<  " element in array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }

    cout << endl;

    cout << "Number of even : " << countEven<<endl;
    cout << "Number of odd : " << countOdd<< endl; 

    return 0; 
}