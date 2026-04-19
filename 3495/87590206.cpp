// 2024년 12월 18일 23:29:26
// 맞았습니다!!
// 2020KB
// 0ms
#import<iostream>
int main(){int h,w,r=0,b;std::cin>>h>>w;char c;while(h--){b=0;for(int i=0;i<w;i++){std::cin>>c;if(c!='.')b++;if(b%2)r++;}}std::cout<<r;}