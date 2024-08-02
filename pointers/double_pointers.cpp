#include<bits/stdc++.h>
using namespace std;

int main() {

    int i = 5;
    int *p = &i;
    int **ptr = &p;
    cout << "printig address of p --> " << &p << endl;
    cout << "printig address of p stored in *ptr --> " << ptr << endl;

    cout << "value of i --> " << i << endl;
    cout << "value of i stored in *P --> " << *p << endl;

    cout << "value of i stored in **ptr --> " << **ptr << endl;

    cout << "addres of i -->" << &i << endl;
    cout << "addres of i through p -->" <<  p << endl;
    cout << "addres of i through ptr-->" << *ptr << endl;

 

     


    return 0;
}