// 2023년 12월 25일 18:12:39
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sum = 0;
  int arr[9];
  for(int i = 0; i < 9; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  int n1, n2;
  sort(arr, arr + 9);
  for(int i = 0; i < 8; i++) {
    for(int j = i + 1; j < 9; j++) {
      if(sum - arr[i] - arr[j] == 100) {
        n1 = i; n2 = j;
      }
    }
  }
  for(int elem : arr) {
    if(elem != arr[n1] && elem != arr[n2]) {
      cout << elem << '\n';
    }
  }
}