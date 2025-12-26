#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int search;
    int found = false;
     
    int arr[size];

    cout << "Enter the " << size << " element in array:"<< endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the search element : ";
    cin >> search;

    for(int i = 0; i < size; i++){
        if(arr[i] == search){
           found = true;
           break;
        }
    }

    if(found){
        cout << search << " element Found in the array"<< endl;
    }
    else{
        cout << search << " element not found in the array."<<endl;
    }

    return 0;
}