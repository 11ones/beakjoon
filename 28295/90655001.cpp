// 2025년 2월 27일 20:19:08
// 컴파일 에러
// KB
// ms
#include <iostream>
using namespace std;
int main() {
    int x = 0, t;
    char d[4] = {'N', 'E', 'S', 'W'};
    for (int i = 0; i < 10; i++) {
        cin >> t;
        if(t == 1) x = (x + 1) % 4;
        if(t == 2) x = (x + 2) % 4;
        if(t == 3) x = (x + 3) % 4;
    }
    cout << d(x);
}
        