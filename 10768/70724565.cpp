// 2023년 12월 25일 17:39:16
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(n < 2) cout << "Before";
    else if(n > 2) cout << "After";
    else {
        if(m < 18) cout << "Before";
        else if(m > 18) cout << "After";
        else cout << "Special";
    }
}