// 2024년 8월 6일 23:34:27
// 런타임 에러 (out_of_range)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int m,l,p,i;
  cin>>s>>m;
  l=s.length();
  vector<pair<string,int>>v(m);
  int d[1000];
  for(i=0;i<l;i++)d[i]=i+1;
  for(i=0;i<m;i++)cin>>v[i].first>>v[i].second;
  for(i=0;i<l;i++)
    for(auto e:v){
      p=e.first.length();
      if(p<=i+1)break;
      if(d[i]<d[i-p]+e.second&&s.substr(i-p+1,p)==e.first){
        d[i]=d[i-p]+e.second;
        for (int j=i;j<l;j++)d[j] = max(d[j],d[i]+j-i);
      }
    }
  cout<<d[l - 1];
}