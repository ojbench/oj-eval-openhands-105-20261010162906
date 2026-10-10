#include <bits/stdc++.h>
using namespace std;

int n, m;

vector<vector<double>> memo;
vector<vector<char>> vis;

double dp(int k, int e) {
    if (e >= m) return 0.0;
    if (k == 0) return 0.0; // no apples left, cannot eat more, but e<m shouldn't happen
    if (vis[k][e]) return memo[k][e];
    vis[k][e] = 1;
    double sum = 0.0;
    for (int x = 1; x <= k; ++x) {
        int nk = k - x;
        int ne = e + x;
        if (ne >= m) {
            // done after this day, no further days
            sum += 0.0;
        } else {
            sum += dp(nk, ne);
        }
    }
    memo[k][e] = 1.0 + sum / k;
    return memo[k][e];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (!(cin >> n >> m)) return 0;
    memo.assign(n+1, vector<double>(m+1, 0.0));
    vis.assign(n+1, vector<char>(m+1, 0));
    double ans = dp(n, 0);
    cout.setf(ios::fixed); cout << setprecision(2) << ans << "\n";
    return 0;
}
