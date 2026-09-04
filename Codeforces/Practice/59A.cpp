#include<bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        }
        else {
            lower++;
        }
    }

    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}