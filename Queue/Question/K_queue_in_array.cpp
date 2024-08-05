#include<bits/stdc++.h>
using namespace std;

class KQueue{
    public:
    int n;
    int k;
    int *front;
    int *next;
    int *rear;
    int *arr;
    int freespot;
    KQueue(int n , int k){
        this->k = k;
        this->n = n;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];

        for(int i = 0; i<k; i++) {
            front[i]=-1;
            rear[i] = -1;
        }
        for(int i = 0; i<n; i++) {
            next[i] = i+1;
        }
        next[n-1] = -1;
        freespot = 0;
    }

    void push(int data, int qn) {
        if(freespot == -1) {
            cout << "Queue is overflow" << endl;
            return ;
        }
        int index = freespot;
        freespot = next[index];
        if(front[qn-1]==-1){
            front[qn-1] = index;
        }else {
             next[rear[qn-1]] = index;
        }
        next[index] = -1;
        rear[qn-1] = index;
        arr[index] = data;
    }

    void pop(int qn) {
        if(front[qn-1]==-1) {
            cout << "Queue is underflow" << endl;
            return;
        }

         int index = front[qn-1];
         front[qn-1] = next[index];
         next[index] = freespot;
         freespot = index;
         cout << "poped ele is " << arr[index] << endl;
    }


};

int main() {

    KQueue q1(10,3);
    q1.push(45,1);
    q1.push(50,1);
    q1.push(51,2);
    q1.push(65,2);
    q1.pop(2);
    q1.pop(1);



    return 0;
}