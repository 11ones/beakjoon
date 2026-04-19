// 2024년 5월 12일 14:18:24
// 컴파일 에러
// KB
// ms
#import<bits/stdc++.h>
typedef pair<int,int>p;
int main(){int n,x,m,t=0;cin>>n;priority_queue<p,vector<p>,greater<>>q;vector<int> v(n);for(int i=0;i<n;i++){cin>>x;q.push({x,i});}m=q.top().first;while(!q.empty()){p y=q.top();if(m<y.first){m=y.first;t++;}v[y.second]=t;q.pop();}for(int e:v){cout<<e<<" ";}}