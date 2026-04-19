// 2025년 2월 7일 04:07:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
    int a, b, c, T;
    cin >> T;
    while(T--) {
        cin >> a >> b >> c;
        cout << min(a, min(b, c)) << "\n";
    }  
}