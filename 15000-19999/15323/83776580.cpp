// 2024년 9월 11일 23:01:44
// 맞았습니다!!
// 6540KB
// 112ms
#include <bits/stdc++.h>
using namespace std;int main() {int k,n,i=0;cin>>k>>n;vector<string>v[26];int a[26]{};for(;i<k;i++){string s;cin>>s;v[s[0]-'a'].push_back(s);}for(i=0;i<26;i++)sort(v[i].begin(), v[i].end());for(i=0;i<n;i++){cin.tie(NULL);char c; cin>>c;c-='a';cout<<v[c][a[c]++%v[c].size()]<<'\n';}}