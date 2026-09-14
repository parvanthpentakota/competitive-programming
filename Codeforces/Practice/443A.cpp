#include<bits/stdc++.h>
using namespace std;

void solution(){
    string s;
    getline(cin, s);

    bool seen[26] = {false};
    int answer = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            int index = s[i] - 'a';

            if(!seen[index]){
                seen[index] = true;
                answer++;
            }
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