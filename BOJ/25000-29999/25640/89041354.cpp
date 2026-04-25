// 2025년 1월 23일 02:15:20
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    string s, t;
    cin >> s >> n;
    map<string, int> m;
    while(n--) {
        cin >> t;
        m[t]++;
    }
    cout << m[s];
}