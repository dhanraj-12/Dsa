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
#define cout(x) cout << x << "\n";

/* ---------------------------------------------------------------------------------------------------------------------------------------------------- */

#ifdef ONLINE_JUDGE
#define debug(x)
#else
#define debug(x) cerr << #x <<"-->> "; _print(x); cerr << endl;
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/* ---------------------------------------------------------------------------------------------------------------------------------------------------- */

void inputv(vector<int> &v, int n) {
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
}
class PrimeGenerator {
private:
    static const int N = 1000000;
    vector<bool> sieve;
    vector<int> basePrimes;

    void createBaseSieve() {
        sieve.resize(N + 1, true);
        sieve[0] = sieve[1] = false;
        for (int i = 4; i <= N; i += 2) {
            sieve[i] = false;
        }
        for (int i = 3; i * i <= N; i += 2) {
            if (sieve[i]) {
                for (int j = i * i; j <= N; j += 2 * i) {
                    sieve[j] = false;
                }
            }
        }
        basePrimes.push_back(2);
        for (int i = 3; i <= N; i += 2) {
            if (sieve[i]) {
                basePrimes.push_back(i);
            }
        }
    }

public:
    PrimeGenerator() {
        createBaseSieve();
    }

    vector<int> getPrimes(int n) {
        if (n <= 1) return {};
        if (n > N) {
            return getPrimesInRange(2, n);
        }
        vector<int> result;
        if (n >= 2) result.push_back(2);
        for (int i = 3; i <= n; i += 2) {
            if (sieve[i]) {
                result.push_back(i);
            }
        }
        return result;
    }

    vector<int> getPrimesInRange(long long l, long long r) {
        vector<int> result;
        if (l > r || r < 2) return result;
        if (r <= N) {
            if (l <= 2) result.push_back(2);
            for (long long i = max(3LL, l + (l % 2 == 0)); i <= r; i += 2) {
                if (sieve[i]) result.push_back(i);
            }
            return result;
        }
        l = max(2LL, l);
        vector<bool> isPrime(r - l + 1, true);
        if (l == 2) result.push_back(2);
        if (l % 2 == 0) l++;
        for (long long i = l; i <= r; i += 2) {
            isPrime[i - l] = true;
        }
        for (int prime : basePrimes) {
            if ((long long)prime * prime > r) break;
            long long firstMultiple = (l / prime) * prime;
            if (firstMultiple < l) firstMultiple += prime;
            if (firstMultiple % 2 == 0) firstMultiple += prime;
            for (long long j = max(firstMultiple, (long long)prime * prime); j <= r; j += 2 * prime) {
                isPrime[j - l] = false;
            }
        }
        for (long long i = l; i <= r; i += 2) {
            if (isPrime[i - l]) {
                result.push_back(i);
            }
        }
        return result;
    }

    bool isPrime(long long n) {
        if (n <= 1) return false;
        if (n <= N) return sieve[n];
        for (int prime : basePrimes) {
            if ((long long)prime * prime > n) break;
            if (n % prime == 0) return false;
        }
        return true;
    }
};
int arraysum(vector<int> &v) {
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i];
    }
    return ans;
}
vector<int> find_all_divisors(int n) {
    vector<int> x;
    int s = sqrt(n);
    for (int i = 1; i <= s; i++) {
        if (n % i == 0) {
            if (n / i == i) x.push_back(i);
            else {
                x.push_back(i);
                x.push_back(n / i);
            }
        }
    }
    return x;
}
bool odd(int n) {
    if (n & 1) return true;
    return false;
}
bool even(int n) {
    if (!(n & 1)) return true;
    return false;
}

/* ---------------------------------------------------------------------------------------------------------------------------------------------------- */

void solve();

int32_t dj() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        freopen("Error.text", "w", stderr);
    #endif
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

void solve() {

}

/* ---------------------------------------------------------------------------------------------------------------------------------------------------- */