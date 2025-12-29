#include <iostream>
#include <vector>
using namespace std;

void sort_01(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;

    while(left < right)
    {
        if(v[left] == 0)
        {
            left++;
        }
        else if(v[right] == 1)
        {
            right--;
        }
        else   // v[left] == 1 && v[right] == 0
        {
            int temp = v[left];
            v[left] = v[right];
            v[right] = temp;
            left++;
            right--;
        }
    }
}

int main()
{
    vector<int> v = {1,0,1,0,1,1,0,0,0,1};

    cout << "Before sorting:\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    sort_01(v);

    cout << "\nAfter sorting:\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
