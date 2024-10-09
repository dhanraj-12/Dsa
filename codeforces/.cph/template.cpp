#include<bits/stdc++.h>
using namespace std;
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
    int n;
    cin >> n;

}