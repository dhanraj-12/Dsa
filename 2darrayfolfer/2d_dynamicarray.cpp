#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int *arr = new int [n]; /// This statement gives dynamic array;
    int **arr2 = new int*[n];



    // Creating 2d dynamic array;


    for(int i = 0; i < n; i++) {
        arr2[i] = new int[m];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>arr2[i][j];
        }
    }

      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


// Releasing memory

    for(int i = 0; i<n; i++) {
        delete [] arr2[i];
    }

    delete [] arr2;


    return 0;
}