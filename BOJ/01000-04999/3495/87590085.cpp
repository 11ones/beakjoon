// 2024년 12월 18일 23:26:21
// 시간 초과
// KB
// ms
#import<iostream>
int main(){int h,w,r=0,b;std::cin>>h>>w;char c;while(h--){b=0;while(w--){std::cin>>c;if(c!='.')b++;if(b%2)r++;}}std::cout<<r;}