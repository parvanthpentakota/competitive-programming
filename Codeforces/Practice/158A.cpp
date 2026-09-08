#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            answer++;
        }
    }

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}