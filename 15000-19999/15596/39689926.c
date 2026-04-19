// 2022년 2월 27일 17:31:30
// 맞았습니다!!
// 12832KB
// 8ms
long long sum(int *a, int n) {
	long long ans = 0;
    	for (int i; i < n; i++)
		ans += a[i];
	return ans;
}
