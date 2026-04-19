// 2022년 10월 4일 20:55:19
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	int k;
	cin >> N >> k;

	char arr[3];
	for (int i = 0; i < k; i++)
		cin >> arr[i];
	sort(arr, arr + k);
	string sav = N;
	if (stoi(N) != 1000000000) //오버플로우 방지
	{
		for (int i = 0; i < N.size(); i++) //N과 같은 자리수에서 최솟값
			sav[i] = arr[0];
		if (stoi(sav) <= stoi(N)) //N보다 최솟값이 작아야 같은 자리수
		{
			for (int i = 0; i < N.size(); i++) // 최댓값 설정
				sav[i] = arr[k - 1]; 

			int i = sav.size() - 1;
			while (stoi(sav) > stoi(N))
			{
				if (k > 2 && sav[i] == arr[2]) // 뒷자리부터 하나씩 감소
				{
					sav[i] = arr[1];
				}
				else if (k > 1 && sav[i] == arr[1])
				{
					sav[i] = arr[0];
				}
				else
				{
					sav[i--] = arr[k - 1];
					continue; // 그 자리 전부 낮췄으면 한자리 앞으로 이동
				}
				for (int j = sav.size() - 1; j > i; j--) // 맨 뒷자리부터 안 줄어든 자리 검사
				{
					if (sav[j] != arr[0])
						i = j; 
				}
			}
			cout << sav;
		}
		else //자리수가 하나 낮을떄
		{
			sav[sav.size() - 1] = '\0';
			for (int i = 0; i < sav.size() - 1; i++) //무조건 최댓값임
			{
				sav[i] = arr[k - 1];
			}
			cout << sav;
		}
	}
	else // 100,000,000일때는 한자리 낮고 최댓값임
	{
		sav[sav.size() - 1] = '\0';
		for (int i = 0; i < sav.size() - 1; i++)
		{
			sav[i] = arr[k - 1];
		}
		cout << sav;
	}
}