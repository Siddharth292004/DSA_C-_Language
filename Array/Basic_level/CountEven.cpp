// Q2. Count even and odd numbers in an array

#include <iostream>
using namespace std;
int main(){

    int n ;
    int even = 0;
    int odd = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the " << n << " element in the array. "<< endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Number of even: " << even << endl;
    cout << "Number of odd: " << odd << endl;

    return 0;
}