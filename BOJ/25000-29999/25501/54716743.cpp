// 2023년 1월 26일 13:48:13
// 맞았습니다!!
// 2024KB
// 76ms
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        bool check = 0;
        int n = 1, l = 0, r = s.size() - 1;
        while (l <= r + 1)
        {
            if (l >= r)
            {
                check = 1;
                break;
            }
            else if (s[l] != s[r])
            {
                check = 0;
                break;
            }
            l++;
            r--;
            n++;
        }
        cout << check << " " << n << endl;
    }
}