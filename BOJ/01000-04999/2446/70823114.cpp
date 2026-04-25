// 2023년 12월 27일 23:11:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    for(int i = - x * 2; i < x * 2 - 2; i += 2) {
        if(i < 0) {
            for(int j = -i; j < x * 2; j += 2) {
                cout << " ";
            }
            for(int j = 2; j <= -i; j++) {
                cout << "*";
            }
        } else {
            for(int j = i + 4; j < x * 2; j += 2) {
                cout << " ";
            }
            for(int j = -2; j <= i; j++) {
                cout << "*";
            }
        }
        cout << '\n';
    }
}