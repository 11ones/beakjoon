// 2024년 9월 18일 15:46:15
// 맞았습니다!!
// 3072KB
// 72ms
#include <bits/stdc++.h>
using namespace std;int main() {int n,m,x;cin>>n>>m;int v[300001]={};for(int i=1;i<=n;i++){cin>>x;if(i>m)v[i]=max(v[i-1],v[i-m]+x);}cout<<v[n];}