// 2024년 5월 1일 13:49:16
// 맞았습니다!!
// 11376KB
// 88ms
#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<string, int, int, int> t;

bool cmp(t a, t b) {
  if(get<1>(a) != get<1>(b)) {
    return get<1>(a) > get<1>(b);
  }
  if(get<2>(a) != get<2>(b)) {
    return get<2>(a) < get<2>(b);
  }
  if(get<3>(a) != get<3>(b)) {
    return get<3>(a) > get<3>(b);
  }
  return get<0>(a) < get<0>(b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<t> v;
  for(int i = 0; i < n; i++) {
    string s;
    int a, b, c;
    cin >> s >> a >> b >> c;
    v.push_back({s, a, b, c});
  }
  sort(v.begin(),v.end(), cmp);

  for(auto e : v) {
    cout << get<0>(e) << '\n';
  }
}