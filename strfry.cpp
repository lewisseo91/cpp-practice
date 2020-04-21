#include <bits/stdc++.h>

using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, str_in_N;
    cin >> N;
    std::string lt[N], rt[N];
    bool is_poss = true;

    for (int i=0;i<N;i++) {
        cin >> lt[i] >> rt[i];
    }
    
    for(int i=0;i<N;i++) {
        int str_chk[26] = {0};
        is_poss = true;
        for(int j=0;j<lt[i].length();j++) {
            str_chk[lt[i][j]-'a']++;
        };
        for(int j=0;j<rt[i].length();j++) {
            str_chk[rt[i][j]-'a']--;
        };
        for (int k=0;k<26;k++) {
            // cout << str_chk[k] << ' ';
            if ( str_chk[k] > 0 || str_chk[k] < 0) {
                is_poss = false;
                break;
            }
        };
        if(!is_poss) {
            cout << "Impossible" << '\n';
        } else {
            cout << "Possible" << '\n';
        }
    }
    
}