// 2023년 8월 13일 13:09:16
// 런타임 에러 (Segfault)
// KB
// ms
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    priority_queue<string> enter;
    priority_queue<string> leave;
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s, el;
        cin >> s >> el;
        if(el[0] == 'e') enter.push(s);
        else leave.push(s);
    }
    while(!(enter.empty()))
    {
        if(enter.top() != leave.top())
        {
            cout << enter.top() << '\n';
            enter.pop();
        }
        else
        {
            enter.pop();
            leave.pop();
        }
    }
}