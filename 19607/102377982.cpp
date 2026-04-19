// 2026년 1월 28일 03:41:30
// 맞았습니다!!
// 6644KB
// 156ms
#import<bits/stdc++.h>
using namespace std;
main(){float d=0;int N,x,y;cin>>N;map<int,int>m;m[0]=0;while(N--){cin>>x>>y;m[x]=y;}auto t=m.begin(),u=t;++u;while(u!=m.end())d=max(d,(float)abs(u->second-t->second)/(u->first-t->first)),++t,++u;cout<<d;}