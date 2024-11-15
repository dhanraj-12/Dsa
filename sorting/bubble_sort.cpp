#include<bits/stdc++.h>
using namespace std;

void printv(vector<int> &v) {

    for(int i = 0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
void bubblesort(vector<int> &arr,int n) {
    bool swapped;
     for(int i =0; i < n-1; i++) {
        swapped = false;
        for(int j = 0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                // swap hua isliye true hua
                swapped = true;
            }
        }

        printv(arr);
        cout << "\n";

        if(swapped == false) {
            // pura sort hai..
            break;
        }

     }
}

 // SWapped is used as flag that arr is sorted or not if it is already sorted then it improve effiecncy


int main() {
    vector<int> arr = {56,57,32,87,54,87,98,23,1,76};
    cout << "bubble sorted array :- " << endl;
    bubblesort(arr,arr.size());
    printv(arr);
    cout << endl;

    return 0;
}