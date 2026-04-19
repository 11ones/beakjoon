// 2024년 3월 24일 20:26:07
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, st, ed, m;
    cin >> n >> st >> ed >> m;
    vector<int>* arr = new vector<int>[n];
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a - 1].push_back(b - 1);
        arr[b - 1].push_back(a - 1);
    }
    queue<pair<int,int>> q;
    bool* d = new bool[n] {};
    q.push({ 0, st - 1 });
    int chon = -1;
    while (!q.empty()) {
        pair<int, int> t = q.front();
        if (t.second == ed - 1) {
            chon = t.first;
            break;
        }
        q.pop();
        for (auto e : arr[t.second]) {
            if (d[e] == 1) {
                continue;
            }
            d[e] = 1;
            q.push({ t.first + 1, e });
        }
    }
    cout << chon;
}