// 2022년 5월 22일 23:22:15
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>
#include <string>

using namespace std;

string A;
string B;
string C;
array <bool, 10001> check{ 0 };

int main()
{
    cin >> A >> B;
    int len;
    if (A.length() > B.length())
        len = A.length();
    else
        len = B.length();
    for (int i{ 0 }; i < len; i++)
    {
        int sav;
        if (A[i] == 0)
        {
            sav = B[i] - '0' + check[i];
        }
        else if (B[i] == 0)
        {
            sav = A[i] - '0' + check[i];
        }
        else
        {
            sav = A[i] - '0' + B[i] - '0' + check[i];
        }
        if (sav >= 10)
        {
            C += (sav - 10 + '0');
            check[i + 1] = 1;
        }
        else
        {
            C += (sav + '0');
        }
    }
    if (check[len] == 1)
        cout << '1';
    cout << C;
}