// 2022년 6월 1일 15:20:27
// 틀렸습니다
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

struct comparebig
{
    bool operator()(Q a, Q b)
    {        
        return a.num < b.num;
    }
};

struct comparesmall
{
    bool operator()(Q a, Q b)
    {        
        return a.num > b.num;
    }
};

struct comparebigcheck
{
    bool operator()(int a, int b)
    {        
        return a < b;
    }
};

struct comparesmallcheck
{
    bool operator()(int a, int b)
    {        
        return a > b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    for (int q = 0; q < t; q++)
    {
        priority_queue<Q, vector<Q>, comparebig> big;
        priority_queue<Q, vector<Q>, comparesmall> small;

        priority_queue<int, vector<int>, comparebigcheck> bigcheck;
        priority_queue<int, vector<int>, comparesmallcheck> smallcheck;

        int n;
        cin >> n;
        int sav;

        for (int i{ 0 }; i < n; i++)
        {
            char ID;
            int num;

            cin >> ID >> num;
            if (ID == 'I')
            {
                big.push({ num,i });
                small.push({ num,i });
            }
            else if (!small.empty() && !big.empty())
            {
                if (num == 1)
                {
                    sav = big.top().check;
                    while (!bigcheck.empty() && !big.empty())
                    {
                        if (sav == bigcheck.top())
                        {
                            big.pop();
                            bigcheck.pop();
                        }
                        else
                            break;
                    }
                    smallcheck.push(sav);
                    if (!big.empty())
                        big.pop();
                }
                else
                {
                    sav = small.top().check;
                    while (!smallcheck.empty() && !small.empty())
                    {
                        if (sav == smallcheck.top())
                        {
                            small.pop();
                            smallcheck.pop();
                        }
                        else
                            break;
                    }
                    bigcheck.push(sav);
                    if (!small.empty())
                        small.pop();
                }
            }
        }

        if (big.empty() || small.empty())
            cout << "EMPTY" << '\n';
        else
        {
            sav = big.top().check;
            while (!bigcheck.empty())
            {
                if (sav == bigcheck.top())
                {
                    big.pop();
                    bigcheck.pop();
                }
                else
                    break;
            }
            sav = small.top().check;
            while (!smallcheck.empty())
            {
                if (sav == smallcheck.top())
                {
                    small.pop();
                    smallcheck.pop();
                }
                else
                    break;
            }
            if (big.empty() || small.empty())
                cout << "EMPTY" << '\n';
            else
                cout << big.top().num << " " << small.top().num << '\n';
        }
    }
}