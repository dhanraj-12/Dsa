#include<bits/stdc++.h>
using namespace std;

#define pi 3.14
int global = 10; // pure program me khi bhi acess kr sakta hu
// global variable is modified so it is risky to use it

inline int getmax(int& a, int& b) {
    return (a>b) ? a : b;
}

// function ki body agar 1 line hot to use kre skte hai
// extra memory and functioncall nhi hota;


void printarr(int arr[], int size, int start = 0) {
    for(int i = start; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// start wala argument optional hai
/*
    function me paas bhi kr skte ho or nhi bhi
    
*/


int main() {
    double area = pi * pi;
    cout << area << endl;

    int a = 1;
    int b = 5;

    int ans = getmax(a,b);
    cout << ans << endl;

    cout << endl;

    int arr[5] = {1,2,3,4,5};
    printarr(arr,5);


    return 0;
}