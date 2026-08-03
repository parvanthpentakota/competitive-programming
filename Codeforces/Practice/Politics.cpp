#include<bits/stdc++.h>
using namespace std;

void solution() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> cnt(k + 1, 0);

        for (int i = 0; i < n; i++) {
            int lcp = 0;
            while (lcp < k && a[i][lcp] == a[0][lcp])
                lcp++;
            cnt[lcp]++;
        }

        int same = cnt[k];

        for (int i = k - 1; i >= 0; i--) {
            int take = min(cnt[i], same - 1);
            if (take < 0) take = 0;
            same += take;
        }

        cout << cnt[k] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solution();
    return 0;
}