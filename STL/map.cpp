#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> map;

    map[1] = "Dhanraj";
    map[2] = "love";
    map[3] = "let";
    for(auto i :map) {
        cout << i.first << " " <<  i.second << endl;
    }
    map.erase(2);
    cout << "after erase" << endl;
    for(auto i : map) {
        cout << i.first << " " <<  i.second << endl;
    }
    return 0;
}