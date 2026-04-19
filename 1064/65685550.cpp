// 2023년 8월 27일 16:55:59
// 맞았습니다!!
// 2032KB
// 0ms
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int eu(int a, int b)
{
    if(b == 0) {return a;}
    return eu(b, a % b);
}

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    int tmp1 = eu(abs(a - c), abs(b - d));
    int tmp2 = eu(abs(c - e), abs(d - f));
    
    
    if((a == c && c == e) || (b == d && d == f) ||
    (abs(a - c) / tmp1 == abs(c - e) / tmp2 && abs(b - d) / tmp1 == abs(d - f) / tmp2) && a != e && b != f)
        cout << "-1";
    else
    {
        double lena, lenb, lenc;
        lena = sqrt(pow(a - c, 2) + pow(b - d, 2));
        lenb = sqrt(pow(c - e, 2) + pow(d - f, 2));
        lenc = sqrt(pow(e - a, 2) + pow(f - b, 2));
        cout << setprecision(10) << fixed << 2 * (max({lena, lenb, lenc})
        - min({lena, lenb, lenc}));
    }
}