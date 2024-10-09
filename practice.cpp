#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sca set<char>              
#define dj main 
#define all(x) (x).begin(), (x).end()
// void inputv(const vector<int> &v(n)) {
//     for(int i = 0; i<n; i++) {
//         cin >> v[i];
//     }
// }
int dj() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i<n; i++) {
            cin >> v[i];
        }
        int a = max(INT_MIN,v[0]);
        for(int i = 1; i<n; i++) {
            a = max(a,v[i]-v[i-1]);
        }

        int b = (x-v[n-1])*2;

        cout << max(a,b) << endl;

    }
    return 0;
}