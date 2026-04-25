// 2025년 1월 19일 22:24:35
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a >= 2 && b <= 4) cout << "TroyMartian\n";
    if(a <= 6 && b >= 2) cout << "VladSaturnian\n";
    if(a <= 2 && b <= 3) cout << "GraemeMercurian\n";
}