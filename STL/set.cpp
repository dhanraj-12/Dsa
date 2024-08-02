#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> set;
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(2);
    set.insert(4);
    for(int i : set) {
        cout << i << " ";
    } cout << endl;
        // Insert is of time complexity of O{logn};

    set<int>::iterator it = set.begin();
    it++;
    set.erase(it);
    for(int i : set) {
        cout << i << " ";
    } cout << endl;
    return 0;
}