#include<bits/stdc++.h>
using namespace std;

const int N = 1000000;
bool sieve[N+1];
void createsieve() {
    for(int i = 2; i<=N; i++) {
        sieve[i] = true;
    }
    for(int i = 2; i*i<=N; i++) {
        if(sieve[i]==true) {
            for(int j = i*i; j<=N; j += i) {
                sieve[j]=false;
            }
        }
    } 
}

vector<int> generatePrime(int n) {
    vector<int> ans;
    for(int i = 2; i<=N; i++) {
        if(sieve[i] == true) {
            ans.push_back(i);
        }
    }
    return ans;
}


int main() {
    createsieve();
    int t;
    cin >> t;
    int l,r;
    cin >> l >> r;
    vector<int> prime = generatePrime(sqrt(r));

    vector<int> dummy(r-l+1, true);
    for(auto pr: prime) {
        int firstmultiple = (l/pr)*pr;
        if(firstmultiple<l) {
            firstmultiple += pr;
        }

        for(int j = max(firstmultiple,pr*pr); j<=r; j += pr) {
            dummy[j-l] = false;
        }
    }

    for(int i = l; i<=r; i++) {
        if(dummy[i-l]) cout << i << " ";
    }
    cout << endl;

}