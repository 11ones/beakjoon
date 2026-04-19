// 2023년 12월 25일 17:45:45
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    cout << b;
}