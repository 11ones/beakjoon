// 2024년 9월 8일 14:04:35
// 맞았습니다!!
// 2152KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n), d;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(auto e : v) {
        auto t = lower_bound(d.begin(), d.end(), e);
        if(t == d.end()) {
            d.push_back(e);
        } else {
            *t = e;
        }
    }
    cout << d.size();
}