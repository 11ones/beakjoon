// 2024년 1월 16일 22:41:55
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int* arr = new int[n];
  int* ans = new int[n];
  
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(arr[i] % arr[j] == 0) {
        ans[i]--;
        ans[j]++;
      } else if(arr[j] % arr[i] == 0) {
        ans[j]--;
        ans[i]++;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}