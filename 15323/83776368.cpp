// 2024년 9월 11일 22:57:31
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;int main() {int k,n,i=0;cin>>k>>n;vector<string>v[26];int a[26]{};for(;i<k;i++){string s;cin>>s;v[s[0]-'a'].push_back(s);}for(i=0;i<26;i++)sort(v[i].begin(), v[i].end());for(i=0;i<n;i++){cin>>k;k-='a';cout<<v[k][a[k]++%v[k].size()]<<'\n';}}