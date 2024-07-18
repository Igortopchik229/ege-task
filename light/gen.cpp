#include <bits/stdc++.h>

using namespace std;
using ll = long long;

mt19937 rnd(time(nullptr));

void solve() {
    ll n = 100;
    ll m = 150;
    cout << n << ' ' << m << '\n';
    ll s = rnd() % n;
    ll f = rnd() % n;
    s++;
    f++;
    cout << s << ' ' << f << '\n';
    while (f == s) {
        f = rnd() % n;
    }
    for (int _ = 0; _ < m; _++) {
        ll a = rnd() % n + 1, b = rnd() % n + 1;
        cout << a << ' ' << b << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt", "w", stdout);
    solve();
    return 0;
}