#include<bits/stdc++.h>
using namespace std;
class temp{
    int age;
    char ch;
};

class Hero {
    private:
    int age;

    public:
    int height;
    string name;
    int health;
    static int timetocomplete;

    Hero() {
        cout << "Constructor is called" << endl; 
    }

    Hero(int health) {
        this->health = health;
    } 

    Hero(Hero& temp) {    // copy constructor done; default bhi hota hai lekin hmra banaya
        cout << "Copy constructor is called" << endl;
        this->health = temp.health;
        this->name = temp.name;
    }

    void setage(int n) {
        age = n;
    }

    int getage() {
        return age; 
    }

    static int time() {
        return timetocomplete;
    }

    ~Hero() {
        cout << "Destructor is called" << endl;
    }



};

int Hero::timetocomplete = 5;

int main() {

    // All this is static allocation 
    Hero ironman;

     // ironman.age = 30;  // as age is privat member it cannot be accesd outside of class;
    ironman.setage(30);
    ironman.height = 180;
     
    cout  << "age-->" << ironman.getage() << endl;
    cout << "height-->" << ironman.height << endl;

    ironman.name = "Tony";
    cout << "name-->" << ironman.name << endl;

    // Dynbamically allocation

    Hero *thor = new Hero();

    thor->setage(30);
    cout << "thor: " << thor->getage() << endl; // one way to acees 
    (*thor).setage(50);
    cout << "thor" << (*thor).getage() << endl; // second way to access

    /* Hero hulk(100);
    hulk.name = "Hugfhgfhk";
    cout <<  "HUlk health-->" << hulk.health << endl;
    cout << "Hulk name -->" << hulk.name << endl;
                                                              // This ia example of shallow copy as hulk and spidername access same memory
    Hero spiderman(hulk);
    cout << "spiderman health-->" << spiderman.health << endl;
    cout << "spiderman name-->" << spiderman.name << endl; */


    delete thor; // as thor is dynamic therfor we have to manually call the destructor

    cout << "Time to complete-->" << Hero::timetocomplete << endl; // this is independent of object

    cout << "static function only uses static member" <<  Hero::time() << endl;

    cout << sizeof(ironman) << endl;

    temp t1;
    cout << sizeof(t1) << endl;
    return 0;
}