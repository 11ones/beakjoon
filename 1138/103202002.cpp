// 2026년 2월 23일 04:27:48
// 맞았습니다!!
// 2020KB
// 0ms
#import<bits/stdc++.h>
using namespace std;
int main(){int N,i;cin>>N;vector<int>v(N),u;for(auto &e:v)cin>>e;for(i=N-1;i>=0;--i)u.insert(u.begin()+v[i],i+1);for(auto e:u)cout<<e<<" ";}