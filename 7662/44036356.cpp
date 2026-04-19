// 2022년 6월 1일 15:38:21
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <queue>

using namespace std;

struct comparebig
{
    bool operator()(int a, int b)
    {        
        return a < b;
    }
};

struct comparesmall
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
        priority_queue<int, vector<int>, comparebig> big;
        priority_queue<int, vector<int>, comparesmall> small;

        priority_queue<int, vector<int>, comparebig> bigcheck;
        priority_queue<int, vector<int>, comparesmall> smallcheck;

        int n;
        cin >> n;

        for (int i{ 0 }; i < n; i++)
        {
            char ID;
            int num;

            cin >> ID >> num;
            if (ID == 'I')
            {
                big.push(num);
                small.push(num);
            }
            else if (!small.empty() && !big.empty())
            {
                if (num == 1)
                {
                    smallcheck.push(big.top());
                    big.pop();
                }
                else
                {
                    bigcheck.push(small.top());
                    small.pop();
                }

                while (!bigcheck.empty())
                {
                    if (big.top() == bigcheck.top())
                    {
                        big.pop();
                        bigcheck.pop();
                    }
                    else
                        break;
                }
                while (!smallcheck.empty())
                {
                    if (small.top() == smallcheck.top())
                    {
                        small.pop();
                        smallcheck.pop();
                    }
                    else
                        break;
                }
        }
        if (big.empty() || small.empty())
            cout << "EMPTY" << '\n';
        else
            cout << big.top() << " " << small.top() << '\n';
    }
}