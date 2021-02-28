//조금씩 수정중입니다. 21.02.18

#include <iostream>
#include <algorithm>
using namespace std;
int C, N;
int p[20000];

int f(int low, int high)
{
	if (low == high) return p[low];
	int mid = (low + high) / 2;
	int res = max(f(low, mid), f(mid + 1, high));
	int left = mid, right = mid + 1; //경계선의 왼, 오른쪽 울타리
	int height = min(p[left], p[right]);
	res = max(res, height * 2);
	while (left > low || right < high) {
		//재귀
	}
	
}
int main()
{
	cin >> C;
	while (C--) {
		cin >> N;
		for (int i = 1; i <= N; i++) cin >> p[i];
		cout << f(1, N) << endl;
	}
}