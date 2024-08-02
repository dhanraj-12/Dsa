#include<bits/stdc++.h>
using namespace std;
void print(int *ptr) {
    cout << *ptr << endl;
} 
void update(int *ptr) {
    *ptr = *ptr + 1;
    cout << "updated pointer value " <<*ptr<<endl;
    
}
int main() {

    int n = 5;
    int *p = &n;
    print(p);
    update(p);
    cout << n << endl;

    return 0;
}