#include <iostream>
using namespace std;

int main(){
    int n, m;
    
    cout <<  "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    int arr[n][m];
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Spiral form of the matrix is:\n";
    int minRow = 0, maxRow = n - 1;
    int minCol = 0, maxCol = m - 1;
    int totalElements = n * m;
    int count = 0;

    while(count < totalElements){
        // Print left wall
        for(int i = minRow; i <= maxRow && count < totalElements; i++){
            cout << arr[i][minCol] << " ";
            count++;
        }
        minCol++;

        // Print bottom wall
        for(int j = minCol; j <= maxCol && count < totalElements; j++){
            cout << arr[maxRow][j] << " ";
            count++;
        }
        maxRow--;

        // Print right wall
        for(int i = maxRow; i >= minRow && count < totalElements; i--){
            cout << arr[i][maxCol] << " ";
            count++;
        }
        maxCol--;

        // Print top wall
        for(int j = maxCol; j >= minCol && count < totalElements; j--){
            cout << arr[minRow][j] << " ";
            count++;
        }
        minRow++;
    }
}