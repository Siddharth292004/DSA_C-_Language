
//  array = { -12, 11, -13, -5, 6, -7, 5, -3, -6, 7, 600 };


#include <iostream>
#include <vector>
using namespace std;

void sortPosNeg(vector<int> & v){
    int n = v.size();
    int i = 0;
    int j = n - 1;

    while(i < j){
        if(v[i] < 0){
            i++;
        }
        else if (v[j] > 0){
              j--;

        }
        else if (v[i] > 0 && v[j] < 0  ){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main() {

    vector<int> arr = { -12, 11, -13, -5, 6, -7, 5, -3, -6, 7, 600 };
    sortPosNeg(arr);

    for(int ch : arr){

        cout << ch << " ";
    }
    return 0;
}