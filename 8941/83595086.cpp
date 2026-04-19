// 2024년 9월 8일 13:58:26
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[4] = {12010, 1008, 16000, 14010};
	int n;
	cin >> n;
	for(int o = 0; o < n; o++) {
		string s;
		cin >> s;
		int l = s.length();
		int w = 0;
		for(int i = 0; i < l; i++) {
			int p;
			switch(s[i]) {
			case 'C':
				p = 0;
				break;
			case 'H':
				p = 1;
				break;
			case 'O':
				p = 2;
				break;
			case 'N':
				p = 3;
			}
			if(i + 1 == l || s[i + 1] >= 'A' && s[i + 1] <= 'Z') {
				w += a[p];
			} else if(i + 2 == l || s[i + 2] >= 'A' && s[i + 2] <= 'Z') {
				w += a[p] * (s[i + 1] - '0');
				i++;
			} else {
				w += a[p] * ((s[i + 1] - '0') * 10 + s[i + 2] - '0');
				i += 2;
			}
		}
		cout << w / 1000 << "." << setw(3) << setfill('0') << w % 1000 << '\n';
	}
}