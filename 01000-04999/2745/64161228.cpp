// 2023년 7월 27일 19:33:55
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int b;
    cin >> b;
    int ans = 0;
    
    int len = s.length();
    int mul = 1;
    
    for(int i = 0; i < len; i++)
    {
        if(s[len - i - 1] >= '0' && s[len - i - 1] <= '9')
            ans += (s[len - i - 1] - '0') * mul;
        else
            ans += (s[len - i - 1] - 'A' + 10) * mul;
        mul *= b;
    }
    cout << ans << '\n';
}