// 2025년 2월 20일 21:38:39
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double t;
    while (cin >> t) {
        if(t < 0) break;
        cout << setprecision(2) << fixed << "Objects weighing " << t << " on Earth will weigh " << t * 0.167 << " on the moon.\n";
    }
}