#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    int officers = 0;
    int untreated = 0;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {
            if (officers > 0) {
                officers--;
            }
            else {
                untreated++;
            }
        }
        else {
            officers += event;
        }
    }

    cout << untreated << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}