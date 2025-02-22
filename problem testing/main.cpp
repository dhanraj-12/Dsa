#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
bool sieve[N+1];

void inputv(vector<int> &v, int n) {
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void printv(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void createsieve() {
    for(int i = 2; i <= N; i++) {
        sieve[i] = true;
    }
    for(int i = 2; i * i <= N; i++) {
        if(sieve[i] == true) {
            for(int j = i * i; j <= N; j += i) {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrime(int n) {
    vector<int> ans;
    for(int i = 2; i <= n; i++) {
        if(sieve[i] == true) {
            ans.push_back(i);
        }
    }
    return ans;
}


void solve() {
    int l, r;
    cin >> l >> r;
    vector<int> prime = generatePrime(sqrt(r));

    vector<int> dummy(r - l + 1, true);
    
    // Handle the case where l == 1, as 1 is not a prime
    if (l == 1) {
        dummy[0] = false;
    }

    for(auto pr : prime) {
        int firstmultiple = max(pr * pr, (l + pr - 1) / pr * pr);
        
        for(int j = firstmultiple; j <= r; j += pr) {
            dummy[j - l] = false;
        }
    }

    int p = 0;
    for(int i = l; i <= r; i++) {
        if(dummy[i - l]) p++;
    }

    cout << p * (p - 1) / 2 << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    createsieve();
    // freopen("in2.txt", "r", stdin);
    // freopen("out2.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}