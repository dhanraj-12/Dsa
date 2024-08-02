#include<iostream>
#include<list>
using namespace std;

int main() {

    //Cant do random access in lsit;

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    for(int i : l) {
        cout << i << " ";
    }
    cout << endl;

    list<int> y(5,100);
    for(int i : y) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}