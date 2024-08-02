#include<bits/stdc++.h>
using namespace std;

class encapsulation_student{

    private:
    int age;
    string name;
    string address;
    int roll_no;

    public:
    int getage() {
        return age;
    }
};

int main() {
    encapsulation_student ram;
    ram.getage();
    return 0;
}