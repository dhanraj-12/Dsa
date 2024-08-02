#include<iostream>
#include<queue>


using namespace std;

int main() {

    queue<string> names;

    names.push("Dj");
    names.push("arav");
    names.push("raj");
    names.push("om");
    cout << names.front() << endl;
    names.pop();
    cout << names.front() << endl;
    cout << names.size() << endl;
    names.pop();
    cout << names.front() << endl;



    return 0;
}