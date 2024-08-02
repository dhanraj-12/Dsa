#include<iostream>
#include<array>
using namespace std;

int main() {
    // STL Array;

    array<int,7> a = {1,2,3,4};
    cout << a.size() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.at(2) << endl;
    cout << a.data() << endl;
    cout << a.max_size() << endl;
    cout << a.empty() << endl;
 
    // all this in time complexity of O(1);
    return 0;
}