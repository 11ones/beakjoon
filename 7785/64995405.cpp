// 2023년 8월 13일 13:27:41
// 런타임 에러 (AccessEmptyContainer)
// KB
// ms
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> enter;
vector<string> leave;
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s, el;
        cin >> s >> el;
        if(el[0] == 'e') enter.push_back(s);
        else leave.push_back(s);
    }
    
    sort(enter.begin(), enter.end());
    sort(leave.begin(), leave.end());
    
    while(!(enter.empty()))
    {
        if(enter.back() != leave.back())
        {
            cout << enter.back() << '\n';
            enter.pop_back();
        }
        else
        {
            enter.pop_back();
            leave.pop_back();
        }
    }
}