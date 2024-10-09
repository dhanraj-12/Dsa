#include<bits/stdc++.h>
using namespace std;

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
int main() {

    int n;
    cin>> n;
    vector<int> v = simplesieve(n);
    for(auto x : v) {
        cout << x << " ";
    }


    return 0;
}