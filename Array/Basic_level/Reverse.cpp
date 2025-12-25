// Q3. Reverse an array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the "<< n << " element the in the array:" << endl;
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }
    
    int start = 0;
    int end = n - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reverse array: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}