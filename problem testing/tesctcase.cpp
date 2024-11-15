#include<bits/stdc++.h>
#define int long long int
using namespace std;
int generateRandomNumberTillN(int N){
    return (rand() % N) + 1; // [0, N - 1] => [1, N]
}
int32_t main() {

    srand(time(0)); // seeding according to current time
    ios::sync_with_stdio(false);
    cin.tie(0);
   int n = generateRandomNumberTillN(100);
    freopen("in2.txt", "w", stdout);
    cout << n << "\n";
    int i = 0;
    while(i<n) {
        int b = generateRandomNumberTillN(pow(10,11) - pow(10,7)); // Ensure b is in range [1, 10^12 - 10^6]
        int a = b + generateRandomNumberTillN(pow(10,6)); // Ensure a is in range [b+1, b+10^6]
        
        if (a <= pow(10,12)) { // Ensure a is within the upper limit
            cout << b << " " << a << endl;
            i++;
        }
    }
     
        
    
}