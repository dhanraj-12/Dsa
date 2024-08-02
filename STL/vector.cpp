#include<iostream>
#include<vector>
using namespace std;

int main() {

    // STL VECTOR;
    cout << endl;
    cout<< "vector" << endl;
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    cout << "capicity-->" << v.capacity() << endl;
    cout << "front-->" << v.front() << endl;
    v.push_back(3);
    cout << "capicity-->" << v.capacity() << endl;
    cout << "before pop" << endl;
    for(int i : v) {
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for(int i : v) {
        cout << i << " ";
    }cout << endl;

    v.clear();
    cout << "after clear size is" << v.size() << "& capacity is " << v.capacity() << endl;
    for(int i : v) {
        cout << i << " ";
    }cout << endl;


    // Time complexity is O(1);

    return 0;
}