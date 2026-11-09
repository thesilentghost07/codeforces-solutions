#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'
const int MOD = 1e9 + 7; // or 998244353

int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Modular inverse via Fermat's Little Theorem (mod must be prime)
int modInverse(int n) {
    return power(n, MOD - 2);
}


void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 1. CONSTANTS, TYPEDEFS & SHORTCUTS
// ============================================================================
const int MOD = 1e9 + 7;      // Common alternative: 998244353
const long long INF = 2e18;   // Safe 64-bit infinity
const double EPS = 1e-9;
const double PI = acos(-1.0);

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

using vi   = vector<int>;
using vll  = vector<ll>;
using pii  = pair<int, int>;
using pll  = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

#define F       first
#define S       second
#define pb      push_back
#define eb      emplace_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
#define endl    '\n'

// 4-directional & 8-directional grid movements
const int dx4[4] = {-1, 1, 0, 0};
const int dy4[4] = {0, 0, -1, 1};
const int dx8[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy8[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

// ============================================================================
// 2. BIT MANIPULATION (64-bit safe)
// ============================================================================
#define popcount(x)  __builtin_popcountll(x)  // Count set bits
#define clz(x)       __builtin_clzll(x)       // Count leading zeros
#define ctz(x)       __builtin_ctzll(x)       // Count trailing zeros
#define msb(x)       ((x) == 0 ? -1 : 63 - __builtin_clzll(x)) // Index of highest set bit
#define lsb(x)       ((x) & -(x))              // Lowest set bit value (e.g., 12 -> 4)
#define isPow2(x)    ((x) > 0 && !((x) & ((x) - 1)))
#define getBit(x, i)    (((x) >> (i)) & 1ULL)
#define setBit(x, i)    ((x) | (1ULL << (i)))
#define clearBit(x, i)  ((x) & ~(1ULL << (i)))
#define toggleBit(x, i) ((x) ^ (1ULL << (i)))

// ============================================================================
// 3. POLICY-BASED DATA STRUCTURES (PBDS / ORDERED SET)
// ============================================================================
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Ordered Set (Ascending)
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Ordered Multiset (stores pair<val, unique_id> to support duplicates and clean erasure)
template <typename T>
using pbds_multiset = tree<pair<T, int>, null_type, less<pair<T, int>>, rb_tree_tag, tree_order_statistics_node_update>;

// ============================================================================
// 4. ANTI-HASH-COLLISION UNORDERED MAP / SET
// ============================================================================
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15ULL;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
        x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
    size_t operator()(pair<uint64_t, uint64_t> x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x.first + FIXED_RANDOM) ^ (splitmix64(x.second + FIXED_RANDOM) << 1);
    }
};

template <typename K, typename V>
using safe_map = unordered_map<K, V, custom_hash>;

template <typename K>
using safe_set = unordered_set<K, custom_hash>;

// ============================================================================
// 5. STRING MANIPULATION UTILITIES
// ============================================================================
namespace StringUtil {
    string ltrim(const string &s) {
        size_t start = s.find_first_not_of(" \t\n\r");
        return (start == string::npos) ? "" : s.substr(start);
    }
    string rtrim(const string &s) {
        size_t end = s.find_last_not_of(" \t\n\r");
        return (end == string::npos) ? "" : s.substr(0, end + 1);
    }
    string trim(const string &s) { return rtrim(ltrim(s)); }

    string toLower(string s) {
        for (char &c : s) c = tolower(c);
        return s;
    }
    string toUpper(string s) {
        for (char &c : s) c = toupper(c);
        return s;
    }

    vector<string> split(const string &s, char delim = ' ') {
        vector<string> tokens;
        string token;
        stringstream ss(s);
        while (getline(ss, token, delim)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    template <typename T>
    string join(const vector<T> &v, const string &delim = " ") {
        ostringstream oss;
        for (size_t i = 0; i < v.size(); i++) {
            if (i > 0) oss << delim;
            oss << v[i];
        }
        return oss.str();
    }

    bool isPalindrome(const string &s) {
        int l = 0, r = sz(s) - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    vector<int> prefixFunction(const string &s) {
        int n = sz(s);
        vector<int> pi(n, 0);
        for (int i = 1; i < n; i++) {
            int j = pi[i - 1];
            while (j > 0 && s[i] != s[j]) j = pi[j - 1];
            if (s[i] == s[j]) j++;
            pi[i] = j;
        }
        return pi;
    }

    vector<int> zFunction(const string &s) {
        int n = sz(s);
        vector<int> z(n, 0);
        int l = 0, r = 0;
        for (int i = 1; i < n; i++) {
            if (i <= r) z[i] = min(r - i + 1, z[i - l]);
            while (i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
            if (i + z[i] - 1 > r) {
                l = i;
                r = i + z[i] - 1;
            }
        }
        return z;
    }
}

// ============================================================================
// 6. DISJOINT SET UNION (DSU)
// ============================================================================
struct DSU {
    vector<int> par, siz;
    int num_components;

    void init(int n) {
        par.resize(n + 1);
        iota(all(par), 0);
        siz.assign(n + 1, 1);
        num_components = n;
    }

    int root(int x) {
        return par[x] == x ? x : par[x] = root(par[x]);
    }

    bool merge(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        num_components--;
        return true;
    }

    bool same(int x, int y) { return root(x) == root(y); }
    int comp_size(int x)    { return siz[root(x)]; }
};

// ============================================================================
// 7. SEGMENT TREE (Point Update, Range Query)
// ============================================================================
struct SegTreeNode {
    ll sum, mx, mn;
    SegTreeNode() : sum(0), mx(-INF), mn(INF) {}
    SegTreeNode(ll v) : sum(v), mx(v), mn(v) {}
};

struct SegmentTree {
    int n;
    vector<SegTreeNode> tree;

    SegTreeNode merge(const SegTreeNode &a, const SegTreeNode &b) {
        SegTreeNode res;
        res.sum = a.sum + b.sum;
        res.mx = max(a.mx, b.mx);
        res.mn = min(a.mn, b.mn);
        return res;
    }

    void init(int sz) {
        n = sz;
        tree.assign(4 * n + 5, SegTreeNode());
    }

    void build(const vll &a, int node, int l, int r) {
        if (l == r) {
            tree[node] = SegTreeNode(a[l]);
            return;
        }
        int mid = (l + r) / 2;
        build(a, 2 * node, l, mid);
        build(a, 2 * node + 1, mid + 1, r);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }

    void update(int node, int l, int r, int idx, ll val) {
        if (l == r) {
            tree[node] = SegTreeNode(val);
            return;
        }
        int mid = (l + r) / 2;
        if (idx <= mid) update(2 * node, l, mid, idx, val);
        else update(2 * node + 1, mid + 1, r, idx, val);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }

    SegTreeNode query(int node, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return SegTreeNode();
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return merge(query(2 * node, l, mid, ql, qr),
                     query(2 * node + 1, mid + 1, r, ql, qr));
    }
};

// ============================================================================
// 8. MATH & NUMBER THEORY
// ============================================================================
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll power(ll base, ll exp, ll mod = MOD) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (__int128)res * base % mod;
        base = (__int128)base * base % mod;
        exp >>= 1;
    }
    return res;
}

ll modInverse(ll n, ll mod = MOD) {
    return power(n, mod - 2, mod);
}

ll isqrt(ll n) {
    ll x = sqrtl((long double)n);
    while ((x + 1) * (x + 1) <= n) x++;
    while (x * x > n) x--;
    return x;
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// ============================================================================
// 9. COMBINATORICS (Precomputed Factorials)
// ============================================================================
const int MAXN = 2e5 + 5;
ll fact[MAXN], invFact[MAXN];

void precompute_factorials(int n = MAXN - 1, ll mod = MOD) {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = (fact[i - 1] * i) % mod;
    invFact[n] = modInverse(fact[n], mod);
    for (int i = n - 1; i >= 1; i--) invFact[i] = (invFact[i + 1] * (i + 1)) % mod;
}

ll nCr(ll n, ll r, ll mod = MOD) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % mod * invFact[n - r] % mod;
}

ll nPr(ll n, ll r, ll mod = MOD) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[n - r] % mod;
}

// ============================================================================
// 10. MAIN LOGIC
// ============================================================================
void Solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // precompute_factorials();

    int t = 1;
    // cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}