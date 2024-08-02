#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    int min ;
    for(int i = 0; i <n-1; i++) {
        min  = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        swap(arr[i],arr[min]);
    }
}



int main() {
     int arr[10] = {90,67,34,2,5,6,78,12,89,21};
     cout << "sorted array is :" << endl;
     selectionsort(arr,10);
     for(int i = 0; i < 10; i++) {
         cout << arr[i] << " ";
     }
     cout << endl;
    return 0;
}