#include<iostream>
#include<queue>
using namespace std;

int main() {

    // Max heap 


    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int n = q.size();
    for(int i = 0; i<n; i++) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    // Min heap;

    priority_queue<int, vector<int>, greater<int> > min;
    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);
    min.push(5);

    int m = min.size();
    for(int i = 0; i<m; i++) {
        cout << min.top() << " ";
        min.pop();

    } 
    cout << endl;
    cout << "is it empty -->" << min.empty() << endl; 
        return 0;
}