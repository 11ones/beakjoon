// 2023년 12월 31일 21:28:21
// 맞았습니다!!
// 2024KB
// 0ms
#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        cout << s[0] + s[2] - '0' * 2 << '\n';
    }
}