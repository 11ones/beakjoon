// 2024년 1월 25일 23:49:32
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  vector<int> pos, neg;
  bool zero = 0;
  int one = 0;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    if (x > 1)
      pos.push_back(x);
    else if (x == 1)
      one++;
    else if (x == 0)
      zero = 1;
    else
      neg.push_back(x);
  }
  sort(pos.begin(), pos.end(), greater<int>());
  sort(neg.begin(), neg.end());
  long long sum = 0;
  for (int i = 0; i < neg.size(); i += 2)
    sum += neg[i] * neg[i + 1];
  for (int i = 0; i < pos.size(); i += 2)
    sum += pos[i] * pos[i + 1];
  if (neg.size() % 2 && !zero)
    sum += neg.back();
  if (pos.size() % 2)
    sum += pos.back();
  cout << sum + one;
}