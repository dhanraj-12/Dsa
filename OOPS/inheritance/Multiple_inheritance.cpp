#include<bits/stdc++.h>
using namespace std;

class Livingbeing {
    public:
    int age;
};

class Animal{
    public:
    string species;
};

class dog :public Livingbeing, public Animal{

};

int main() {
    dog germanshepard;
    germanshepard.age = 15;
    germanshepard.species = "jsdhfiulh";
    cout << "Age: " << germanshepard.age << endl;
    cout << "Species: " << germanshepard.species << endl;
    return 0;
}