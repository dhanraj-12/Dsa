#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element is: " << s.top() << endl;
    s.pop();
    cout << "Top element after popping is: " << s.top() << endl;
    cout << "size of stack is: " << s.size() << endl;
    return 0;
}