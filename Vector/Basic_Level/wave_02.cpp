#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout <<"Enter the number of row: ";
    cin >> r;
    cout << "Enter the number of column: ";
    cin >> c;

    int arr[r][c];
    
    cout << "Enter the numbers in 2D matrix: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    cout << "After the wave form: "<<endl;
    for(int i = 0; i < r; i++){
        if(i %2 == 0){
               
        }
    }
    
}