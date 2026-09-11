#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    vector<int> answer(n + 1);

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        answer[x] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << answer[i] << " ";
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}