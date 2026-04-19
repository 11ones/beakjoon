// 2024년 9월 8일 13:43:11
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore('\n', 10);
    for(int o = 0; o < n; o++) {
        int arr[26] = {};
        string s;
        getline(cin, s);
        for(auto e : s) {
            if(e >= 'a' && e <= 'z') {
                arr[e - 'a']++;
            } else if(e >= 'A' && e <= 'Z') {
                arr[e - 'A']++;
            }
        }
        int x = 0;
        for(auto e : arr) {
            if(e) {
                x++;
            }
        }
        if(x == 26) {
            cout << "pangram\n";
        } else {
            cout << "missing ";
            for(int i = 0; i < 26; i++) {
                if(!arr[i]) {
                    cout << (char)(i + 'a');
                }
            }
            cout << '\n';
        }
    }
}