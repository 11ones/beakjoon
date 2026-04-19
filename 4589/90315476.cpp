// 2025년 2월 20일 01:56:46
// 틀렸습니다
// KB
// ms
#include<iostream>
using namespace std;
int main() {
    int x, a, b, c;
    cin >> x;
    while(x--) {
        cin >> a >> b >> c;
        cout << (a <= b && b <= c || a >= b && b >= c ? "Ordered\n" : "Unordered\n");
    }
}
        