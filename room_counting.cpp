#include <bits/stdc++.h>

using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    int answer = 0;
    cin >> N >> K;
    int s[N], y[N], s_count[N], y_count[12] = {0};
    for (int i=0;i<N;i++) {
        cin >> s[i] >> y[i];
        if(s[i] == 0) {
            y_count[y[i]-1]++;
        } else {
            y_count[y[i]+5]++;
        }
    };
    
    for (int i=0;i<12;i++) {
        answer += std::ceil((double)y_count[i]/K);
    }
    cout << answer;

}