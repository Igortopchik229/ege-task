#include <bits/stdc++.h>

using namespace std;
using ll = long long;

constexpr ll INF = 1e18;

void solve() {
    ll n, m; cin >> n >> m;
    ll s, f; cin >> s >> f;
    vector<vector<ll>>d(n, vector<ll>(n, INF));
    for (int i = 0; i < m; i++) {
        ll a, b, c; cin >> a >> b >> c; a--; b--;
        d[a][b] = min(d[a][b], c);
        d[b][a] = d[a][b];
    }
    for (int to = 0; to < n; to++) {
        for (int u = 0; u < n; u++) {
            for (int v = 0; v < n; v++) {
                d[u][v] = min(d[u][v], d[u][to] + d[to][v]);
            }
        }
    }
    cout << d[--s][--f];
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("B.txt", "r", stdin);
    solve();
    return 0;
}
