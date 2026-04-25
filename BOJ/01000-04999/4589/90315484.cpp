// 2025년 2월 20일 01:57:19
// 맞았습니다!!
// 2020KB
// 0ms
#include<iostream>
using namespace std;
int main() {
    int x, a, b, c;
    cin >> x;
    cout << "Gnomes:\n";
    while(x--) {
        cin >> a >> b >> c;
        cout << (a <= b && b <= c || a >= b && b >= c ? "Ordered\n" : "Unordered\n");
    }
}
        