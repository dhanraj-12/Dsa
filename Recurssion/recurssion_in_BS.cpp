#include<bits/stdc++.h>
using namespace std;

// checking array is sorted or not using recurssion function

bool IsSorted(int array[],int n){
    if(n == 0 || n == 1) {
        return true;
    }

    if(array[0] > array[1]) {
        return false;
    } else {
        return IsSorted(array+1,n-1);
    }
}

// sum of all elements in array using recurssion function

int sum(int arry[] , int n) {
    if(n==0 || n == 1) {
        return arry[0];
    }

    return arry[0] + sum(arry+1,n-1);
}

// Liner search in array using recurssion function

int linerarsearch(int array[],int n,int key) {
    if(n == 0) {
        return -1;
    }
    if(array[0] == key) {
        return array[0];
    }
    return linerarsearch(array+1,n-1,key);
}

// bineary search using recurssion function

int binarysearch(int array[],int n, int key) {
    if(n == 0) return -1;

    int mid = n/2;
    if(array[mid]==key) {
        return array[mid];
    } else if(array[mid]>key) {
        return binarysearch(array,mid,key);
    } else {
        return binarysearch(array+mid+1,n-mid-1,key);
    }
}

int main() {
    int array[] = {1,6,3,4,5};
    cout << IsSorted(array,5) << endl;
    cout << sum(array,5) << endl;
    cout << linerarsearch(array,5,5) << endl;
    cout << binarysearch(array,5,5) << endl;

    return 0;
}