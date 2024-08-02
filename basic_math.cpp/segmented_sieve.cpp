#include<bits/stdc++.h>
using namespace std;

void simplesieve(int n, vector<int>&Prime) {
        vector<bool> prime(n+1,true);
        int count = 0;

    for(int i = 2; i*i <= n; i++) {
        if(prime[i] == true) {
            for(int j = i*i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p]){
            Prime.push_back(p);
            cout << p << " ";
            count++;
        }
//             cout << endl;
//             cout << endl;
//    cout << count << endl;

}


void segmented_sieve(int n) {
    int limit = floor(sqrt(n)) +1;
    vector<int> prime;
    prime.reserve(limit);
    simplesieve(limit,prime);   

    int low = limit;
    int high = 2*limit;

    while(low<n) {
        if(high>=n) {
            high = n;
        }

        vector<bool> isPrime(high-low+1,true);

        for(int i = 0; i<prime.size(); i++) {
            
            int firstmultiple = (low/prime[i]) * prime[i];
            if(firstmultiple<low) {
                firstmultiple += prime[i];
            }

                for(int j = firstmultiple; j<high; j +=prime[i]){
                    isPrime[j-low] = false;
                }
        }

                for(int i = low; i<high; i++) {
                    if(isPrime[i-low]) {
                        cout << i << " ";
                    }
                }

        low = low + limit;
        high = high + limit;

    }
}

int main() {

    int n;
    cin >> n;
    segmented_sieve(n);
    


    return 0;
}