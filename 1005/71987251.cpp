// 2024년 1월 18일 23:47:04
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> p;

vector<int> tv;
vector<int> *v = new vector<int>[1'000];
vector<int> *rv = new vector<int>[1'000];
int arr[1'000] = {}, res;
bool visit[1'000] = {};
queue<int> q, qt;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int f = 0; f < t; f++) {
    tv.clear();
    for (int i = 0; i < 1000; i++) {
      v[i].clear();
      rv[i].clear();
      arr[i] = 0;
      visit[i] = 0;
    }
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      tv.push_back(tmp);
    }
    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      v[a - 1].push_back(b - 1);
      rv[b - 1].push_back(a - 1);
    }

    cin >> res;
    res--;
    qt.push(res);

    while (!qt.empty()) {
      int tmp = qt.front();
      qt.pop();
      if (visit[tmp]) {
        continue;
      }
      visit[tmp] = 1;
      if (rv[tmp].empty()) {
        arr[tmp] = tv[tmp];
        for (auto elem : v[tmp]) {
          q.push(elem);
        }
      } else {
        for (auto elem : rv[tmp]) {
          qt.push(elem);
        }
      }
    }
    cout << q.size() << " ";
    while (!q.empty()) {
      if (arr[res] != 0) {
        break;
      }
      int tmp = q.front();
      q.pop();
      bool check = 0;
      int mx = 0;
      for (auto elem : rv[tmp]) {
        if (arr[elem] == 0) {
          check = 1;
          break;
        }
        if (mx < arr[elem]) {
          mx = arr[elem];
        }
      }
      if (check)
        continue;
      arr[tmp] = mx + tv[tmp];
      for (auto elem : v[tmp]) {
        q.push(elem);
      }
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        arr[i] = tv[i];
      }
    }
    cout << arr[res] << '\n';
  }
}