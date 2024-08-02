#include<bits/stdc++.h>
using namespace std;

void simplesieve(int n) {
        vector<bool> prime(n+1,true);
        int count = 0;
        prime[0] = prime[1] = false;
    for(int i = 2; i*i <= n; i++) {
        if(prime[i] == true) {
            for(int j = i*i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p]){
            cout << p << " ";
            count++;
        }
            cout << endl;
            cout << endl;
   cout << count << endl;

}
int main() {

    int n;
    cin>> n;
    simplesieve(n);


    return 0;
}