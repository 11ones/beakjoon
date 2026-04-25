// 2023년 8월 13일 14:11:06
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string a, b, c;
    cin >> a >> b >> c;
    if(a[0] != 'F' && a[0] != 'B')
    {
        if((stoi(a) + 3) % 3 == 0 && (stoi(a) + 3) % 5 == 0) cout << "FizzBuzz";
        else if((stoi(a) + 3) % 3 == 0) cout << "Fizz";
        else if((stoi(a) + 3) % 5 == 0) cout << "Buzz";
        else cout << (stoi(a) + 3);
    }
    else if(b[0] != 'F' && b[0] != 'B')
    {
        if((stoi(b) + 2) % 3 == 0 && (stoi(b) + 2) % 5 == 0) cout << "FizzBuzz";
        else if((stoi(b) + 2) % 3 == 0) cout << "Fizz";
        else if((stoi(b) + 2) % 5 == 0) cout << "Buzz";
        else cout << (stoi(b) + 2);
    }
    else
    {
        if((stoi(c) + 1) % 3 == 0 && (stoi(c) + 1) % 5 == 0) cout << "FizzBuzz";
        else if((stoi(c) + 1) % 3 == 0) cout << "Fizz";
        else if((stoi(c) + 1) % 5 == 0) cout << "Buzz";
        else cout << (stoi(c) + 1);
    }
}
