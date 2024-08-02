#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int row = 3;
    int col = 4;
    int start = 0;
    int end = row * col - 1;
    int mid, target;
    cin >> target;

    while (start <= end) {
        mid = start + (end - start) / 2;
        int element = arr[mid / col][mid % col];
        if (element == target) {
            cout << "Element found at index (" << mid / col << ", " << mid % col << ")" << endl;
            return 0;
        } else if (element < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}
