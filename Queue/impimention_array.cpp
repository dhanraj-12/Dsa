#include<bits/stdc++.h>
using namespace std;
#define max_size 1000
class Queue{
    private:
    int *arr;
    int rear;
    int f;
    public:
     Queue() {
        arr = new int[max_size];
        rear = -1;
        f = 0;
     }
    void push(int x) {
        if(rear == max_size-1) {
            cout << "Queue is overflow" << endl;
            return ;
        }
        arr[++rear] = x;
    }
    int pop() {
        if(rear == -1 ) {
            cout << "Queue is underflow" << endl;
            return -1;
        }
        
        int x = arr[f++];
        cout << x  << " " << "is sucesfully poped" << endl;
        if(f == rear) {
            f = 0;
            rear ==0;
        }
        return x;
    }

    void front() {
        cout << arr[rear] << endl;
    }
    void print() {
        int i = f;
        while(i<=rear) {
            cout << arr[i] << "->";
            i++;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.push(4);
    q.push(78);
    q.push(45);
    q.push(12);
    q.print();
    q.pop();
    q.print();
    q.front();
    q.pop();
    q.print();


    return 0;
}