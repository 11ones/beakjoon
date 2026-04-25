// 2022년 5월 22일 23:43:27
// 맞았습니다!!
// 2036KB
// 0ms
#include <iostream>
#include <array>
#include <string>

using namespace std;

string A;
string B;
string C;
array <bool, 10010> check{ 0 };

int main()
{
    cin >> A >> B;
    int len;
    int Alen{ (int)A.length() };
    int Blen{ (int)B.length() };
    if (A.length() > B.length())
    {
        len = (int)A.length();
        for (int i{ 0 }; i <= len; i++)
        {
            int sav;
            if (Blen - i < 0)
            {
                sav = A[Alen - i] - '0' + check[i];
            }
            else
            {
                sav = A[Alen - i] - '0' + B[Blen - i] - '0' + check[i];
            }
            if (sav >= 10)
            {
                C += (sav - 10 + '0');
                check[i + 1] = 1;
            }
            else
            {
                C += (sav + '0');
                check[i + 1] = 0;
            }
        }
    }
    else
    {
        len = B.length();
        for (int i{ 0 }; i <= len; i++)
        {
            int sav;
            if (Alen - i < 0)
            {
                sav = B[Blen - i] - '0' + check[i];
            }
            else
            {
                sav = A[Alen - i] - '0' + B[Blen - i] - '0' + check[i];
            }
            if (sav >= 10)
            {
                C += (sav - 10 + '0');
                check[i + 1] = 1;
            }
            else
            {
                C += (sav + '0');
                check[i + 1] = 0;
            }
        }
    }

    if (check[len + 1] == 1)
        cout << '1';
    for (int i{ len }; i > 0; i--)
    {
        cout << C[i];
    }
}