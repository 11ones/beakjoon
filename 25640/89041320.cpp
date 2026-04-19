// 2025년 1월 23일 02:13:34
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <map>
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