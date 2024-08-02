#include<bits/stdc++.h>
using namespace std;
#define maxsize 5
class Queue{
    private:
    int rear;
    int front;
    int* arr;
    public:
    Queue() {
        rear = -1;
        front =-1;
        arr = new int[maxsize];
    }

    void push(int x) {
        if((front == 0 && rear == maxsize-1)||(rear == (front-1)%(maxsize-1))) {
            cout << "Queue is full" << endl;
            return;
        }
        if(front == -1) {
            front = rear = 0;
        }else if(rear ==maxsize-1 && front!= 0) {
            rear = 0;
        }else{
            rear++;
        }
        arr[rear] = x;
        return;
    }

    int pop() {

        if(front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        if(front == rear) {
            front = rear = -1;
        }else if(front == maxsize-1) {
            front = 0;
        }else {
            front++;
        }
        return ans;
    }
};
int main() {
    Queue q;
    q.push(23);
    q.push(24);
    q.push(25);
    q.push(26);
    q.push(27);
    q.push(28);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    q.pop();

    

    return 0;
}