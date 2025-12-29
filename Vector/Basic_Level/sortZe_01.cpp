#include <iostream>
#include <vector>
using namespace std;

void sort_01(vector<int> &v) {   // pass by reference
    int n = v.size();
    int no0 = 0;
    int no1 = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == 0)
            no0++;
        else
            no1++;
    }

    for (int i = 0; i < n; i++) {
        if (i < no0)
            v[i] = 0;
        else
            v[i] = 1;
    }
}

int main() {
    vector<int> v = {1, 0, 1, 0, 0, 0, 1};

    cout << "Before sorting:\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    sort_01(v);

    cout << "After sorting:\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
