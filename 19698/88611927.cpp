// 2025년 1월 14일 01:46:22
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    cout << min((w / l) * (h / l), n);
}