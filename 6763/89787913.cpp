// 2025년 2월 8일 22:48:19
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if(b <= a) cout << "Congratulations, you are within the speed limit!";
    else {
        cout << "You are speeding and your fine is $";
        if(b - a > 30) cout << 500;
        else if(b - a > 20) cout << 270;
        else cout << 100;
        cout << ".";
    }
}