#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> pos, neg;

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    cout << "Sorted Array (Positive followed by Negative):\n";
    for(int i = 0; i < pos.size(); i++){
        cout << pos[i] << " ";
    }
    for(int i = 0; i < neg.size(); i++){
        cout << neg[i] << " ";
    }
    cout << endl;

    return 0;
}