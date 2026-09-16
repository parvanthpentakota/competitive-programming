#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    int x;
    cin >> x;

    int maximum = x;
    int minimum = x;
    int answer = 0;

    for(int i = 1; i < n; i++){
        cin >> x;

        if(x > maximum){
            maximum = x;
            answer++;
        }
        else if(x < minimum){
            minimum = x;
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