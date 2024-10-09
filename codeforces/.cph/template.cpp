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

vector<int> simplesieve(int n) {
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
    vector<int> ans;
    for (int p = 2; p <= n; p++)
        if (prime[p]){
            ans.push_back(p);
            count++;
        }
            
   return ans;;

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