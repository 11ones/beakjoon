// 2025년 1월 23일 02:13:00
// 컴파일 에러
// KB
// ms
#include <iostream>
using namespace std;
int main() {
    int n;
    string s, t;
    cin >> n >> s;
    map<string, int> m;
    while(n--) {
        cin >> t;
        m[t]++;
    }
    cout << m[s];
}