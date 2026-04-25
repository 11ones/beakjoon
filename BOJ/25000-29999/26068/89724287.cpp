// 2025년 2월 7일 21:40:44
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;
int main() {
    int n, t = 0;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        if(stoi(s.substr(2)) <= 90) t++;
    }
    cout << t;
}