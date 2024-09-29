#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size = 0;

    void insert(int val) {
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index>1) {
            int parent = index/2;
            if(arr[parent] < arr[index]) {
                std::swap(arr[parent],arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }

    void delet() {
        if(size==0) {
            cout << "Nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<=size) {
            int leftindex = 2 * i;
            int rightindex = (2 * i) + 1;

        // Find the largest among the current node, left child, and right child
            int largest = i;
            if (leftindex <= size && arr[leftindex] > arr[largest]) {
                largest = leftindex;
            }
            if (rightindex <= size && arr[rightindex] > arr[largest]) {
                largest = rightindex;
            }

        // If the largest is not the current node, swap and move down
            if (largest != i) {
                std::swap(arr[i], arr[largest]);
                i = largest;  // Move to the child node
            } else {
                return;  // Heap is now valid
            }

        }
    }

    void print() {
        for(int i = 1; i<=size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h1;
    h1.insert(40);
    h1.insert(78);
    h1.insert(410);
    h1.insert(60);
    h1.insert(70);
    h1.print();
    h1.delet();
    h1.print();

    return 0;
}