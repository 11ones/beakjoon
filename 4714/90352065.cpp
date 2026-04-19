// 2025년 2월 20일 21:34:57
// 출력 초과
// KB
// ms
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    while (x--) {
        double t;
        cin >> t;
        cout << "Objects weighing " << t << " on Earth will weigh " << t * 0.167 << " on the moon.\n";
    }
}