#include<bits/stdc++.h>
using namespace std;

int fastexponential(int a,int b) {
    if(b==0) return 1;
    if(b==1) return a;

    int ans = pow(a,b/2);
    if(b%2==0) {
        return ans*ans;
    } else {
        return ans*ans*a;
    }
}

int main() {

    cout << fastexponential(3,11) << endl;
    return 0;
}