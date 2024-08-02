#include<bits/stdc++.h>
using namespace std;

void bubblesortbyrecurrsion(int array[],int n) {
    
    if(n==1 || n==1) return; 

    for(int i =0; i<n-1; i++) {
        if(array[i] > array[i+1]) {
            swap(array[i], array[i+1]);
        }
    }
    bubblesortbyrecurrsion(array,n-1);
}

void selectionsortbyrecurrsion(int array[], int n, int index = 0) {
    if (n == 0 || n == 1 || index == n - 1) return;

    int min_index = index;
    for (int i = index + 1; i < n; i++) {
        if (array[i] < array[min_index]) {
            min_index = i;
        }
    }
    swap(array[index], array[min_index]);
    selectionsortbyrecurrsion(array, n, index + 1);
}
int main() {
    int arr[10] = {67,90,89,45,23,87,12,21,21,90};
    /*bubblesortbyrecurrsion(arr,10);
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }*/

   selectionsortbyrecurrsion(arr,10);
   for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    cout << endl;
}