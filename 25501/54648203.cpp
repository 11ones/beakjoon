// 2023년 1월 25일 10:46:07
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <string>
using namespace std;

int n = 0;

int recursion(const char* s, int l, int r)
{
    n = l + 1;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s)
{
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        char s[100];
        cin >> s;
        cout << isPalindrome(s) << " " << n << endl;
    }
}