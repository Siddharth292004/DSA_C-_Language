#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Wave form of the matrix is:\n";
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) // even row → right to left
        {
            for(int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else // odd row → left to right
        {
            for(int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
