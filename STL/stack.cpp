#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> names;
    names.push("Dj");
    names.push("arav");
    names.push("raj");
    names.push("om");

    cout<<names.top()<<endl;
    names.pop();
    cout<<names.top()<<endl;

    cout << "empty or not " << names.empty() << endl;

     
     
    return 0;
}