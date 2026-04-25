// 2025년 2월 13일 02:11:47
// 맞았습니다!!
// 2024KB
// 0ms
#include<iostream>
#include<map>
using namespace std;
int main() {
    int x;
    map<int, int> m;
    for(int i = 0; i < 5; i++) { 
        cin >> x;
        m[x]++;
    }
    for(auto e : m) if (e.second % 2) cout << e.first;
}