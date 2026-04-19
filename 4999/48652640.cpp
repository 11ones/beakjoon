// 2022년 9월 2일 21:11:55
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if(a.size() > b.size())
        cout << "go";
    else
        cout << "no";
}