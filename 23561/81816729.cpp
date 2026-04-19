// 2024년 7월 30일 22:37:51
// 맞았습니다!!
// 3192KB
// 52ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(3 * n);
    for (int i = 0; i < n * 3; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[2 * n - 1] - v[n];
}