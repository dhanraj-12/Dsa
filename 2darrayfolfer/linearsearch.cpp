#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int col) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col <4; col++) {
            if(arr[row][col]==target) {
                return 1;
            }
        }
    }

    return 0;
}


void printsum(int arr[][4], int row, int col){
    for(int row = 0; row<3; row++) {
        cout << "sum is : ";
        int sum = 0;
        for(int col = 0; col < 4; col++) { 
            sum = sum+arr[row][col];
        }
        cout << sum << endl;
    }
}
int main() {

    cout<< "Enter the element to search" << endl;
    int target ;
    cin >> target;
    int arr[3][4];
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }
    // ar[3][4] = {{1,2,3,4}, {5,6,7,8} , {9,10,11,12}};

    if(ispresent(arr,target,3,4)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }


    // Row wise sum;

    /*
    1 2 3 4 --> 10
    5 6 7 8 --> 25
    9 10 11 12--> 42

    */

   printsum(arr,3,4);




    return 0;
}