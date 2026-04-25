// 2023년 7월 29일 09:03:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

bool is_in(int x, int y, int r)
{
    return x * x + y * y <= r * r;
}

int main()
{
    int w, h, x, y, p, r;
    cin >> w >> h >> x >> y >> p;
    r = h / 2;
    
    int c = 0;
    
    for(int i = 0; i < p; i++)
    {
        int x1, y1;
        cin >> x1 >> y1;
        if(x1 >= x && x1 <= x + w && y1 >= y && y1 <= y + h) {c++;}
        else if (x1 < x) { c += is_in(x - x1, y + r - y1, r);}
        else { c += is_in(x + w - x1, y + r - y1, r);}
    }
    cout << c;
}