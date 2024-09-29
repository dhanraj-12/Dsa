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
int dj() {
    int t;
    cin >> t;
    while(t--) {
        int m,p;
        cin >> m >> p;
        int a = m;
        int cp = p;
        int i =0;
        while(a < 300) {
            i++;
            cp += 20;
            if(a > 1000-cp) {
                break;
            }
            a++;
        }

        cout << i-1 << endl;
    }
    return 0;
}