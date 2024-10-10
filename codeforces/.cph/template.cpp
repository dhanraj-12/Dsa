#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
bool sieve[N+1];
#define int long long int
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>              
#define dj main 
#define all(x) (x).begin(), (x).end()
void inputv(vector<int> &v, int n) {
    for(int i = 0; i<n; i++) {
        cin >> v[i];
    }
}
void printv(vector<int> &v) {

    for(int i = 0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

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



void solve();

int32_t dj() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

void solve() {

}