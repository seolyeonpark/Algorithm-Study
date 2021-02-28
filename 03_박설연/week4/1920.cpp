#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //얌생이(?
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int arrN[100001];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arrN[i];
    cin >> m;
    
    //STL 이용한 방법 -> 속도 빠름 코드 줄음 효과
    sort(arrN, arrN + n);
    int t;
    for (int i = 0; i < m; i++) {
        cin >> t;
        cout << binary_search(arrN, arrN + n, t) << endl;
    }
}