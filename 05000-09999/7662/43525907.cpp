// 2022년 5월 19일 16:45:38
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
int main()
{
    int t;
    cin >> t;

    for (int q = 0; q < t; q++)
    {
        priority_queue<Q, vector<Q>, comparebig> big;
        priority_queue<Q, vector<Q>, comparesmall> small;

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
                small.push({ num,0 });
            }
            else if (small.size() != 0 && big.size() != 0)
            {
                if (num == 1)
                {
                    int sav = big.top().num;
                    big.pop();
                    vector <Q> v;
                    while (small.size() > 0 && (small.top().num != sav || small.top().check == 1))
                    {
                        v.push_back({ small.top() });
                        small.pop();

                    }
                    small.pop();
                    while (v.size() != 0)
                    {
                        small.push({ v.back() });
                        v.pop_back();
                    }
                }
                else
                {
                    int sav = small.top().num;
                    small.pop();
                    vector <Q> v;
                    while (big.size() > 0 && (big.top().num != sav || big.top().check == 1))
                    {
                        v.push_back({ big.top() });
                        big.pop();
                    }
                    big.pop();
                    while (v.size() != 0)
                    {
                        big.push({ v.back() });
                        v.pop_back();
                    }
                }
            }
        }
        if (big.empty())
            cout << "EMPTY" << '\n';
        else
            cout << big.top().num << " " << small.top().num << '\n';
    }
}