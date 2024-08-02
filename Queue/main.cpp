#include<bits/stdc++.h>
using namespace std;

int main () {
    queue<int> q;
    int a;
    cin >> a;
    q.push(a);
    q.push(2*a);
    q.push(3*a);
    q.pop();
    cout << q.empty() << endl;
    return 0;
}