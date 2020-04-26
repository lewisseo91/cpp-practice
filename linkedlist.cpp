#include <bits/stdc++.h>
using namespace std;

const int MX = 7;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

//  꼬임
void insert(int addr, int num){
    // unused = 저장될 위치
    dat[unused] = num;
    // 새 원소 pre 값에 삽입할 위치 주소 대입
    pre[unused] = addr;
    // 새 원소 nxt 값에 삽입할 위치 nxt 값 대입
    nxt[unused] = nxt[addr];
    // 삽입할 위치 nxt 값 삽입할 위치 다음 원소 pre 값 새 원소로 변경
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    // pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    // 끝날 때 unused 찾아줘야.
    unused++;
};

void erase(int addr){
  nxt[pre[addr]] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
};

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  for(int i=0;i<MX;i++) {
    cout << dat[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << pre[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << nxt[i] << ' ';
  }
  cout << '\n';
  // traverse();
  insert(0, 30); // 30(address=2) 10
  for(int i=0;i<MX;i++) {
    cout << dat[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << pre[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << nxt[i] << ' ';
  }
  cout << '\n';
  // traverse();
  insert(2, 40); // 30 40(address=3) 10
  for(int i=0;i<MX;i++) {
    cout << dat[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << pre[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << nxt[i] << ' ';
  }
  cout << '\n';
  // traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  for(int i=0;i<MX;i++) {
    cout << dat[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << pre[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << nxt[i] << ' ';
  }
  cout << '\n';
  // traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  for(int i=0;i<MX;i++) {
    cout << dat[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << pre[i] << ' ';
  }
  cout << '\n';
  for(int i=0;i<MX;i++) {
    cout << nxt[i] << ' ';
  }
  cout << '\n';
//   traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
//   erase(1); // 30 40 20 70
//   traverse();
//   erase(2); // 40 20 70
//   traverse();
//   erase(4); // 40 70
//   traverse();
//   erase(5); // 40
//   traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
}