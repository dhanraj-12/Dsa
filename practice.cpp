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
    string a = to_string(t);
    unordered_map<char,int> mp;
    for(int i = 0; i<a.size(); i++) {
        mp[a[i]]++;
    }
    bool flag = false;
    if(mp['4'] == mp['7']) {;
        cout << a << endl;
        flag = true;
    }else{
        int a = mp['4'];
        int b = mp['7'];
        
    }



    return 0;
}