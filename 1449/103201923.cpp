// 2026년 2월 23일 04:14:06
// 맞았습니다!!
// 2020KB
// 0ms
#import<bits/stdc++.h>
using namespace std;
int main(){int N,L,x,i=1,v[1001]={};cin>>N>>L;while(N--){cin>>x;++v[x];}x=0,--L;for(;i<1001;++i)if(v[i])++x,i+=L;cout<<x;}