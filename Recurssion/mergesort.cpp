#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e) {
    int mid = s + (e-s)/2;
    int len1  = mid -s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value from main array;

    int mainarrayindex = s;
    
    for(int i =0; i<len1; i++) {
        first[i] = arr[mainarrayindex];
        mainarrayindex++;
    }
    
    mainarrayindex = mid+1;
    for(int i = 0; i<len2;  i++) {
        second[i] = arr[mainarrayindex];
        mainarrayindex++;
    }

    // merge two aorted array

    int index1 = 0;
    int index2 = 0;

    mainarrayindex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainarrayindex] = first[index1];
            index1++;
        }
        else {
            arr[mainarrayindex] = second[index2];
            index2++;
        }
        mainarrayindex++;
    }

    while(index1 < len1) {
        arr[mainarrayindex] = first[index1];
        index1++;
        mainarrayindex++;
    }

    while(index2 < len2) {
        arr[mainarrayindex] = second[index2];
        index2++;
        mainarrayindex++;
    }

   delete[] first;
   delete[] second;


}
void mergesort(int *arr, int s, int e){
    if(s>=e) {
        return;
    }
    int mid = s + (e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}
int main() {

    int arr[5] = {76,45,87,12,99};
    int n = 5;
    mergesort(arr, 0 , n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}