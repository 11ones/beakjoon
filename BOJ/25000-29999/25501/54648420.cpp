// 2023년 1월 25일 10:51:15
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int n;

int recursion(string s, int l, int r)
{
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else
    {
        n += 1;
        return recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(string s)
{
    n = 1;
    return recursion(s, 0, s.size() - 1);
}

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        cout << isPalindrome(s) << " " << n << endl;
    }
}