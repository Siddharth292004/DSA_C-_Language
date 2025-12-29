#include <iostream>
using namespace std;

void sort_01(int arr[], int n) {
    int no0 = 0, no1 = 0;

    // count 0s and 1s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            no0++;
        else
            no1++;
    }

    // place 0s and 1s
    for (int i = 0; i < n; i++) {
        if (i < no0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}

int main() {
    int arr[] = {1, 0, 1, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort_01(arr, n);

    cout << "After sorting:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
