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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        unordered_map<int,int> mp;
        for(int i = 0; i<n-1; i++) {
            for(int j = i+1; j<n; j++) {
                int a = arr[i];
                int b = arr[j];

                int sum = a+b;
                int diff = abs(a-b);
                for(int d = diff+1; d<=sum-1; d++) {
                    mp[d]++;
                }
            }
        }

        cout << mp.size() << endl;
    }

    return 0;
}