#include <iostream>
using namespace std;

int main() {

    int n, m;
    
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = m - 1;
    int totalElements = n * m;
    int count = 0;

    cout << "Spiral form of the matrix is:\n";

    while (count < totalElements) {

        // 🔹 Top wall
        for (int j = minc; j <= maxc && count < totalElements; j++) {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;

        // 🔹 Right wall
        for (int i = minr; i <= maxr && count < totalElements; i++) {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;

        // 🔹 Bottom wall
        for (int j = maxc; j >= minc && count < totalElements; j--) {
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;

        // 🔹 Left wall
        for (int i = maxr; i >= minr && count < totalElements; i--) {
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;
    }
}
