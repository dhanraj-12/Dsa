#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n) {

    int i,j,key;
    for(i = 1; i<n; i++) {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        

    }


}

int main() {
    int arr[10] = {56,57,32,87,54,87,98,23,1,76};
    cout << "insertion sorted array" << endl;
    insertion_sort(arr,10);
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; 
}