// 2025년 5월 6일 17:11:09
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int M, N;
array<set<int>, 21> v, u;
vector<int> r;

void run(vector<int> &t, vector<int> a, int d) {
	while(a[d]) ++d;
	if(d == M) {
		if(r.empty() || r.size() > t.size()) {
			r = t;
		}
	}
	for(int e : u[d]) {
		auto x = a;
		for(int f : t) {
			if(e == f) goto E;
		}
		for(int f : v[e])	x[f] = 1;
		t.push_back(e);
		run(t, x, d + 1);
		t.pop_back();
		E:;
	}
}

int main() {
	int K;
	cin >> K;
	for(int o = 1; o <= K; ++o) {
		v.fill(set<int>());
		u.fill(set<int>());
		r.clear();
		cin >> M >> N;
		cin.ignore();
		for(int i = 0; i < N; ++i) {
			string s;
			getline(cin, s);
			while(s.back() == ' ') s.pop_back(); 
			if(s == "") continue;
			int p = 0, x;
			while(s.find(' ', p) != string::npos) {
				x = stoi(s.substr(p, s.find(' ', p) - p)) - 1;
				v[i].insert(x);
				u[x].insert(i);
				p = s.find(' ', p) + 1;
			}
			x = stoi(s.substr(p)) - 1;
			v[i].insert(x);
			u[x].insert(i);
		}
		vector<int> t, a(21);
		run(t, a, 0);

		cout << "Data Set " << o << ":";
		for(int e : r) cout << " " << (char)(e + 'A');
		cout << (o == K ? "\n" : "\n\n");
	}
}