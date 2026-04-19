// 2025년 2월 22일 21:34:58
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main() {
    int a[6], c = 0;
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        c += a[i + 3] - min(a[i], a[i + 3]);
    }
    cout << c;
}