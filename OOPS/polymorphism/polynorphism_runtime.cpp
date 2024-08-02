#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak() {
        cout << "Unknown Sound" << endl;
    }
};

class Dog: public Animal{
    public:
    void speak() {
        cout << "Woof!" << endl;
    }
};

int main() {

    Dog myDog;
    myDog.speak();
    


    return 0;
}