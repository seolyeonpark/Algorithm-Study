#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int MAX = 1000000;

int N; //나무수
long long M; // 나무의 길이
long long tree[MAX];


bool solution(long long height) { //야금야금 나무자르기(?
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		if (tree[i] > height)
			sum += tree[i] - height;
	}
	if (sum >= M)
		return true; //맞으면
	return false; //아니면
}


int main() {

	//시간빠르게
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;


	long long low = 1;
	long long high = 0;


	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}

	high = * max_element(tree, tree + N); //큰값

	long long  ans = 0;
	while (low <= high){
		long long mid = (low + high) / 2; //절반 값과 비교
		if (solution(mid)) {
			ans = mid;
			low = mid + 1; //더 큰수 찾아보기
		}
		else {
			high = mid - 1;
		}
	}
	cout << ans << endl;
	return 0;
}