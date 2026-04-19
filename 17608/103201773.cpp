// 2026년 2월 23일 03:53:22
// 맞았습니다!!
// 2412KB
// 56ms
#import<bits/stdc++.h>
using namespace std;
int main() {int N;cin>>N;vector<int>v(N);for(auto &e:v)cin>>e;for(int i=N-2;i>=0;--i){v[i]=max(v[i],v[i+1]);}cout<<unique(v.begin(),v.end())-v.begin();}