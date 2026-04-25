// 2024년 5월 29일 23:59:27
// 맞았습니다!!
// 2024KB
// 420ms
#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  for (int o = 0; o < n; o++) {
    string s;
    getline(cin, s, '\n');
    stack<char> sk;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ' ') {
        while (!sk.empty()) {
          cout << sk.top();
          sk.pop();
        }
        cout << " ";
      } else {
        sk.push(s[i]);
      }
    }
    while (!sk.empty()) {
      cout << sk.top();
      sk.pop();
    }
    cout << '\n';
  }
}