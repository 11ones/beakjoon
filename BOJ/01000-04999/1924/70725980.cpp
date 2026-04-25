// 2023년 12월 25일 18:24:16
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int date[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  int m, d;
  cin >> m >> d;
  switch((date[m] + d) % 7) {
    case 0:
      cout << "SUN";
    break;
    case 1:
      cout << "MON";
    break;
    case 2:
      cout << "TUE";
    break;
    case 3:
      cout << "WED";
    break;
    case 4:
      cout << "THU";
    break;
    case 5:
      cout << "FRI";
    break;
    case 6:
      cout << "SAT";
    break;
    default:
      cout << "ERR";
  }
}