// 2024년 5월 3일 18:07:59
// 맞았습니다!!
// 2556KB
// 4ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  string s;
  cin >> s;
  priority_queue<string, vector<string>, greater<string>> q;
  int l = s.size();
  for(int i = 0; i < l; i++) {
    q.push(s.substr(i, l - i));
  }
  while(!q.empty()) {
    cout << q.top() << '\n';
    q.pop();
  }
}