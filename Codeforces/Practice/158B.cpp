#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    int count[5] = {0};

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        count[x]++;
    }

    int answer = 0;

    // Groups of 4
    answer += count[4];

    // Groups of 3 + groups of 1
    int pairs = min(count[3], count[1]);

    answer += count[3];

    count[1] -= pairs;

    // Remaining groups of 1 with groups of 3
    // If some groups of 3 had no group of 1,
    // they already occupy their own taxi.

    // Groups of 2
    answer += count[2] / 2;

    if(count[2] % 2 == 1){
        answer++;

        // One group of 2 can take up to two groups of 1
        count[1] -= min(2, count[1]);
    }

    // Remaining groups of 1
    if(count[1] > 0){
        answer += (count[1] + 3) / 4;
    }

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}