#include<bits/stdc++.h>
using namespace std;

int partion(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    for(int j = low; j<=high; j++) {
        if(arr[j]<pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void Quicksort(int arr[], int low, int high) {
    if(low>=high) {
        return ;
    }

    int pi = partion(arr, low, high);
    Quicksort(arr, low, pi-1);
    Quicksort(arr, pi+1, high);
}

int main() {

    int arr[10] = {100,56,76,93,34,21,57,34,87,22};
    int n = 10;
    Quicksort(arr,0,n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}