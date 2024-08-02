#include<bits/stdc++.h>
using namespace std;

int main() {

    int num = 5;
    int *ptr = &num;
    cout << "addressof num block stored in ptr --> " << ptr << endl;
    cout << "value of num block pointed by ptr -->" << *ptr << endl;
    cout << "address of ptr block --> " << &ptr << endl;
    cout << "address of num block -->" << &num << endl;
    cout << "address of value of num block pointed by ptr -->" << &*ptr << endl;

    cout << endl;
    double d = 4.4;
    double *ptr1 = &d;

    cout << "size of double " << sizeof(double) << endl;
    cout << "size of int " << sizeof(num) << endl;
    cout << "size of double ptr " << sizeof(ptr1) << endl;
    cout << "size of int ptr " << sizeof(ptr) << endl;
    cout << "Size of pointer will always be of 8 byte as it only stores address" << endl;

    cout << endl;

    /*
         can initialize pointer in both ways
    */

   int i = 6;
   int *q = &i;
   int *p = 0;
   p = &i;

   cout << *p << endl;
   cout << p << endl;

   cout << *q << endl;
   cout << q << endl;

    cout << "both value of q and p pointer is same" << endl;

    // copying a pointer 

    cout << endl;

    int *k = ptr;
    cout << *k << endl;
    cout << k << endl;

    cout << *ptr << endl;
    cout << ptr << endl;
    cout << endl;

    // pointer in array

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7};
    int *pt = arr;
    cout << "adress of first block -->" << arr << endl;
    cout << "adress of first block -->" << pt << endl;
    cout << "adress of first block -->" << &arr[0] << endl;

    cout << "adress of second block -->" << &arr[1] << endl;
    cout << "adress of second block -->" << arr + 1 << endl;

    cout << "adress of third block -->" << &arr[2] << endl;
    cout << "adress of third block -->" << arr + 2 << endl;

    cout << "value at 1st index -->" << *arr +1 << endl;

    cout << "value at 2nd index -->" << *arr +2 << endl;

    cout << "value at 3rd index -->" << *arr +3 << endl;

    cout << "value at 4th index -->" << *arr +4 << endl;

    return 0;
}