// 2023년 7월 29일 09:52:33
// 틀렸습니다
// KB
// ms
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
    ((a - c) % tmp1 == (c - e) % tmp2 && (b - d) % tmp1 == (d - f) % tmp2))
        cout << "-1.0";
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