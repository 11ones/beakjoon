// 2024년 10월 24일 22:36:11
// 맞았습니다!!
// 3568KB
// 156ms
#import<bits/stdc++.h>
using namespace std;int main(){long long n,m,c=0,x,i=0;cin>>n>>m;priority_queue<int>q;for(;i<n;i++){cin>>x;c+=x;q.push(x);while(c >= m){c-=q.top()*2;q.pop();}}cout<<n-q.size();}