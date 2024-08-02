#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair

class Stack{
    public:
    int arr[1000];
    int top;
    Stack() {
        top = -1;
    }
    
    bool push(int x) {
        if(top >= 1000-1) {
            cout << "Stack Overflow\n";
            return false;
        }else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }

    }
    int pop() {
        if(top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        } else {
            int x = arr[top--];
            cout << x << " popped from stack\n";
            return x;
        }
    }
    int peek() {
        if(top < 0) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element is " << s.peek() << endl;
    s.pop();
    cout << "Top element is " << s.peek() << endl;
    return 0;
}