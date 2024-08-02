#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int age;
    int roll;
    int mark;
    Student() {
        age =18;
        roll = 89;
        mark = 100;
    }
};
class Vishant:public Student{
    public:
    string name;
    Vishant() {
        name = "Vishant";
    }

    // void get() {
    // cout << this->age << endl;
    // cout << this->mark << endl;
    // cout << this->roll << endl;

    // }
};
int main() {

    Vishant v1;
    cout << v1.age << endl;
    cout << v1.roll << endl;
    cout << v1.mark << endl;
    // v1.get();
    cout << v1.name << endl;

    
    return 0;
}