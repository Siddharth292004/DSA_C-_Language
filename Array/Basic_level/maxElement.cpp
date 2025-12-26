// Q. Find maximum and minimum element from the array.

#include <iostream>
using namespace std;

int main() 
{
    int size;
    int max = INT_MIN;
    int min = INT_MAX;
    cout << "Enter the size of the array : ";
    cin >> size;

    int array[size];
  // optional : int max = array [0];
    cout << "Enter the " << size << " element in the array: "; 

    for(int j=0; j < size; j++){
        cin >> array[j];
    }

    for(int i = 0; i < size; i++)
    {
        if(array[i]> max){
            max = array[i];
        }
        if(array[i]<min){
            min = array[i];
        }
    }
    cout << " Maximum element of the array: " << max << endl;
    cout << " Minimum  element of the array: " << min << endl;

    return 0;
}