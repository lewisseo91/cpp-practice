#include <bits/stdc++.h>

using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    std::string prevWord, nextWord;
    int alpa_size = 26;
    int alpabet_set[alpa_size] = {0};
    int plus_val = 0, minus_val = 0;
    int answer = 0;
    cin >> prevWord;
    cin >> nextWord;

    for(int i=0;i<prevWord.size();i++) {
        alpabet_set[prevWord[i] - 'a']++;
    }
    for(int i=0;i<nextWord.size();i++) {
        alpabet_set[nextWord[i] - 'a']--;
    }

    for(int i=0;i<alpa_size;i++) {
        if(alpabet_set[i] > 0) {
            plus_val += alpabet_set[i];
        } else {
            minus_val += alpabet_set[i];
        }
    }
    cout << plus_val - minus_val;
    
}