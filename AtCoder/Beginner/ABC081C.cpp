#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> frequency;

    int count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        }
        else {
            frequency.push_back(count);
            count = 1;
        }
    }

    frequency.push_back(count);

    int distinct = frequency.size();

    if (distinct <= k) {
        cout << 0 << '\n';
        return;
    }

    sort(frequency.begin(), frequency.end());

    int answer = 0;

    for (int i = 0; i < distinct - k; i++) {
        answer += frequency[i];
    }

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}