#include <bits/stdc++.h>

using namespace std;
int main(void) {
    int A,B,C;
    string mulpl;
    cin >> A;
    cin >> B;
    cin >> C;
    int arr[10] = {0};
    mulpl = std::to_string(A*B*C);
    for(char s: mulpl) {
        // cout << s << ' ';
        int s_num = (int)s - '0';
        // cout << s_num << ' ';
        arr[s_num]++;
    }

    for(int i=0;i<10;i++) {
        cout << arr[i] << '\n';
    }
}