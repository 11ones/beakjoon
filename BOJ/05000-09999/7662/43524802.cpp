// 2022년 5월 19일 16:25:22
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>

using namespace std;

typedef struct
{
    int num;
    int check;
}Q;

struct compare
{
    bool operator()(Q a, Q b)
    {        
        return a.num < b.num;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int q = 0; q < t; q++)
    {
        priority_queue<Q, vector<Q>, compare> big;
        priority_queue<Q, vector<Q>, compare> small;

        int n;
        cin >> n;     

        for (int i{ 0 }; i < n; i++)
        {
            char ID;
            int num;
            cin >> ID >> num;
            if (ID == 'I')
            {
                big.push({ num,0 });
                small.push({ -num,0 });
            }
            else
            {
                if (num == 1)
                {
                    if (big.size() == 0)
                        continue;
                    int sav = big.top().num;
                    big.pop();
                    vector <Q> v;
                    while (small.top().num != -sav && small.top().check == 0)
                    {
                        v.push_back({ small.top() });
                        small.pop();
                    }
                    sav = small.top().num;
                    small.pop();
                    small.push({ sav,1 });
                    while (v.size() != 0)
                    {
                        small.push({ v.back() });
                        v.pop_back();
                    }
                }
                else
                {
                    if (small.size() == 0)
                        continue;
                    int sav = small.top().num;
                    small.pop();
                    vector <Q> v;
                    while (big.top().num != -sav && big.top().check == 0)
                    {
                        v.push_back({ big.top() });
                        big.pop();
                    }
                    sav = big.top().num;
                    big.pop();
                    big.push({ sav,1 });
                    while (v.size() != 0)
                    {
                        big.push({ v.back() });
                        v.pop_back();
                    }
                }
            }
            if (small.size() != 0)
            {
                int x = small.top().check;
                while (x == 1 && small.size() > 0)
                {
                    small.pop();
                    x = small.top().check;
                }
            }
            if (big.size() != 0)
            {
                int x = big.top().check;
                while (x == 1 && big.size() > 0)
                {
                    big.pop();
                    x = big.top().check;
                }
            }
        }
        if (big.empty())
            cout << "EMPTY" << '\n';
        else
            cout << big.top().num << " " << -small.top().num << '\n';
    }
}