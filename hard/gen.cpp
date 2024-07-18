#include <bits/stdc++.h>

using namespace std;
using ll = long long;

mt19937 rnd(time(nullptr));

void solve() {
    ll n = 100;
    ll m = 77;
    ll k = 69;
    cout << n << ' ' << m << ' ' << k << '\n';
    ll s = rnd() % n + 1;
    ll f = rnd() % n + 1;
    while (f == s) {
        f = rnd() % n;
    }
    cout << s << ' ' << f << '\n';
    for (int _ = 0; _ < m + k; _++) {
        ll a = rnd() % n + 1, b = rnd() % n + 1, c = rnd() % 50 + 1;
        cout << a << ' ' << b << ' ' << c << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt", "w", stdout);
    solve();
    return 0;
}