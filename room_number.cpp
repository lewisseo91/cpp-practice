#include <bits/stdc++.h>

using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int num[10] = {0};
    bool every_zero = false, change_chk = false, skip_num = false;
    int answer = 0;
    cin >> N;
    while(N>0) {
        num[N%10]++;
        N = N/10;
    }
    // 9, 6 은 한번에 2개씩 깎는게 가능.
    while(!every_zero) {
        change_chk = false;
        skip_num = false;
        for (int i=0;i<10;i++) {
            if(num[i] > 0) {
                change_chk = true;
                if( i != 6 && i != 9) {
                    num[i]--;
                } else if (i == 6 || i == 9 && !skip_num) {
                    if(num[i] > 1) {
                    num[i] -= 2;
                    skip_num = true;
                    } else {
                    num[i] --;
                    }
                }
            }
        }
        if(!change_chk) {
            every_zero = true;
            break;
        }
        answer++;
    }

    if( answer > 0) {
        cout << answer;
    } else {
        // 엣지 케이스
        cout << 1;
    }
}