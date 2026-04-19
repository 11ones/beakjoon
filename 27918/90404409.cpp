// 2025년 2월 22일 01:25:35
// 컴파일 에러
// KB
// ms
#include <iostream>
using namespace std;
int main() {
    int x, a = 0, b = 0;
    cin >> x;
    while(x--) {
        char c;
        cin >> c;
        if(abs(a - b) < 2) {
            c == 'D' ? a++ : b++;
        }
    }
    cout << a << ":" << b;