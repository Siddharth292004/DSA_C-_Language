#include <iostream>
using namespace std;

void sort_01(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        if(arr[left] == 0){
            left++;
        }
        else if(arr[right] == 1){
            right--;
        }
        else{   // arr[left] == 1 && arr[right] == 0
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main(){
    int arr[] = {1,0,1,0,1,1,0,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    sort_01(arr, n);

    cout << "\nAfter sorting:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
