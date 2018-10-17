#include <bits/stdc++.h>

using namespace std;

const int MAXM = 100;

int n, m, st[MAXM], sp, sz, a[MAXM], ret, tn, ai;
bool used[MAXM];
int forbidden[MAXM];
set<int> S;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> ai;
        ++a[ai % m];
        S.insert(ai);
    }
    if (m % 2 == 0)
        a[m / 2] = min(a[m / 2], 1);
    ret = 0;
    for(int i = 1; i <= m / 2; i++)
        ret += max(a[i], a[m - i]);
    ret += min(a[0], 1);
    cout << ret << endl;
    return 0;
}