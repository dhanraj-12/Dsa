#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sca set<char>
#define dj main 
#define all(x) (x).begin(), (x).end()
int32_t dj() {
    int t;
    cin >> t;
    while(t--) {
    int n;
     cin >> n;
     vector<int> arr(n);
     int one = 0;
     int zero = 0;
     for(int i = 0; i<n; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            zero++;
        }else {
            one++;
        }
     }

     int ans = one;
    //  int r = 0, l = 0;
     for(int i = 2; i<=n; i++) {
        int r = 0, l = 0;
        int a = 0;
        int b = 0;
        while(r<n) {
            if(arr[r] == 0) {
                a++;
            }else{
                b++;
            }


            if(r-l+1 == i) {
                if(b > a){
                    ans++;
                }
                if(arr[l]==0) {
                    a--;
                }else {
                    b--;
                }
                l++;
            }
            r++;
        }
     }

     cout << ans << endl;

     }
    return 0;
}