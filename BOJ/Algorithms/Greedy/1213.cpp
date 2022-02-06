#include <bits/stdc++.h>

using namespace std;

int alphabet[26];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string tmp;
    cin >> tmp;
    for(auto i : tmp) alphabet[i - 'A']++;

    int err = 0;
    int mid_index = -1;

    for(int i = 0; i < 26; i++){
        if(alphabet[i] > 0){
            if(alphabet[i] % 2 == 1){
                mid_index = i;
                alphabet[i]--;
                err++;
            }
        }
    }
    if(err > 1) cout << "I'm Sorry Hansoo\n";
    else{
        string ans = "";
        string tmp = "";
        for(int i = 0; i < 26; i++){
            if(alphabet[i] > 0){
                for(int j = 0; i < alphabet[i] / 2; j++){
                    ans += i + 'A';
                }
            }
        }
        tmp = ans;
        reverse(tmp.begin(), tmp.end());
        if(mid_index != -1){
            ans += mid_index + 'A';
        }
        ans += tmp;
        cout << ans << '\n';
    }

}