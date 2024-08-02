#include<iostream>
using namespace std;
void bubblesort(int arr[],int n) {
    bool swapped;
     for(int i =0; i < n-1; i++) {
        swapped = false;
        for(int j = 0; j<n-1-i; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                // swap hua isliye true hua
                swapped = true;
            }
        }

        if(swapped == false) {
            // pura sort hai..
            break;
        }

     }
}

 // SWapped is used as flag that arr is sorted or not if it is already sorted then it improve effiecncy


int main() {
    int arr[10] = {56,57,32,87,54,87,98,23,1,76};
    cout << "bubble sorted array :- " << endl;
    bubblesort(arr,10);
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}