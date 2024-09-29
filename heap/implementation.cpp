#include<bits/stdc++.h>
using namespace std;



class Heap{
    private:
    int size;
    int arr[100];
    public:
    Heap() {
        this->size = 0;
    }
    void insert(int data) {
        size = size+1;
        int index = size;
        arr[index] = data;
        int parent = index/2;
        while(index>1) {
            parent = index/2;
            if(arr[parent] < arr[index]) {
                std::swap(arr[parent],arr[index]);
                index = parent;
            }else {
                return;
            }
        }
    }

    void deletion() {
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

void buildheap(int arr[],int n,int i) {
        int largest = i;
        int leftchild = i*2;
        int rightchild = (i*2)+1;
        if(leftchild <= n && arr[leftchild] > arr[largest]) {
            largest = leftchild;
        }
        if(largest <= n && arr[rightchild] > arr[largest]){
            largest = rightchild;
        }

        if(largest != i) {
            swap(arr[largest],arr[i]);
            buildheap(arr,n,largest);
        }else {
            return;
        }
}


void heapsort(int arr[],int n) {
    int size = n;   
    while(size >= 1) {
        swap(arr[size],arr[1]);
        size--;
        buildheap(arr,size,1);
    }
}




int main() {

    Heap h1;
    h1.insert(60);
    h1.insert(50);
    h1.insert(45);
    h1.insert(61);
    h1.insert(12);
    h1.insert(100);
    h1.print();
    h1.deletion();
    h1.print();
    h1.deletion();
    h1.print();
    h1.deletion();

    h1.print();

    int arr[6] = {-1,55,60,34,54,31};
    for(int i = 1; i<6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    for(int i = 6/2; i>0; i--) {
        buildheap(arr,6,i);
    }
    for(int i = 1; i<6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   heapsort(arr,6);
   for(int i = 1; i<6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;



    return 0;
}