// 2024년 12월 19일 23:17:51
// 맞았습니다!!
// 2020KB
// 40ms
#import<iostream>
using namespace std;typedef long long l;int main() {l n,r=0,p,t,j,v[5000];cin>>n;while(n--){t=0;cin>>p;p*=2;for(j=0;j<p;j++){cin>>v[j];}v[p]=v[0];v[p+1]=v[1];for(j=0;j<p;j+=2){t+=v[j]*v[j+3]-v[j+1]*v[j+2];}r+=abs(t);}cout<<r/2;}