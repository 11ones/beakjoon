// 2023년 7월 27일 19:44:20
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;
    string s;
    while(n >= 1)
    {
        if(n % b >= 10) {s += n % b + 'A' - 10;}
        else {s += n % b + '0';}
        n /= b;
    }
    for(int i = 0; i < s.length(); i++)
    {
        cout << s[s.length() - i - 1];
    }
}