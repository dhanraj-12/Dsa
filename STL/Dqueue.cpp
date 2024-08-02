#include <iostream>
#include<deque>
using namespace std;

int main() {
    // Deque means double enden queue.

    deque<int> e = {1, 2, 3, 4, 5};
    e.push_back(1);
    e.push_front(2);
    for(int i : e) {
        cout << i << " ";
    }
    cout << endl;
    e.pop_back();
    for(int i : e) {
        cout << i << " ";
    }
    cout << endl;

    cout << "it empty" << e.empty() << endl;
    e.erase(e.begin(), e.end());
    cout << "it empty" << e.empty() << endl; 

    return 0;
}