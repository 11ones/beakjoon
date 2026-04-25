// 2022년 9월 3일 23:50:19
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    while(s != "#")
    {
        int counts = 0;
        for(char elem : s)
        {
            if(elem < 'a')
                elem += 'a' - 'A';
            switch(elem)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                counts++;
            }
        }
        cout << counts << "\n";
        getline(cin, s);
    }
    return 0;
}