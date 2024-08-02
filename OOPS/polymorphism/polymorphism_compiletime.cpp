#include<bits/stdc++.h>
using namespace std;


// compile-time polymorphism
/*
i -> Function overloading
*/

class polymmorphism_func_overloading{

    public:
    void display(int a){
        cout << "Integer: " << a << endl;
    }

    void display(float a){
        cout << "Float: " << a << endl;
    }
};


/*
 ii -> operator overloading
*/

class B{
    public:
    int c;
    int b;

    public:
    int add() {
        return c + b;
    }

    void operator+ (B const& obj) {
        int value1 = this->c;
        int value2 = obj.c;
        cout << "output " << value1-value2 << endl;
    }

    void operator() () {
        cout << "Bracket overloaded" << endl;
    }

};

int main() {

    polymmorphism_func_overloading a;
    a.display(10);
    a.display(10.5f);  // Calls the float version of display()

    B obj1, obj2;
    obj1.c = 10;
    obj2.c = 5;
    obj1 + obj2; // Calls the operator overloading function
    obj1();
    return 0;
}