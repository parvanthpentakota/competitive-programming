#include<bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;

    bool seen[26] = {false};
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';

        if (!seen[index]) {
            seen[index] = true;
            count++;
        }
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    }
    else {
        cout << "IGNORE HIM!\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}