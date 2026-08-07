#include<bits/stdc++.h>
using namespace std;

void solution() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        if (n % 3 == 0)
            cout << "Second\n";
        else
            cout << "First\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}