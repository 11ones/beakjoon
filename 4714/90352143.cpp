// 2025년 2월 20일 21:36:44
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;
int main() {
    double t;
    while (cin >> t) {
        if(t == -1) break;
        cout << "Objects weighing " << t << " on Earth will weigh " << t * 0.167 << " on the moon.\n";
    }
}