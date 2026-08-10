#include<bits/stdc++.h>
using namespace std;

void solution(){
        int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            anton++;
        } else {
            danik++;
        }
    }

    if (anton > danik) {
        cout << "Anton\n";
    } 
    else if (danik > anton) {
        cout << "Danik\n";
    } 
    else {
        cout << "Friendship\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}