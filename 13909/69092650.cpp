// 2023년 11월 10일 13:22:18
// 맞았습니다!!
// 2916KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long L;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  vector<L> v;
  for (int i = 1; i * i <= 2100000000; i++) {
    v.push_back(i * i);
  }
  int n;
  cin >> n;
  bool check = 1;
  for(int i = 0; i < v.size();i++){
    if(v[i] > n){
      cout << i;
      check = 0;
      break;
    } 
  }
  if(check == 1){
    cout << v.size();
  }
}