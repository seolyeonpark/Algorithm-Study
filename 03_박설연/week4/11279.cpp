#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
//STL
//우선순위큐

int N, x;
priority_queue<int> pq;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.empty())
				cout << 0 << endl;
			else
			{
				cout << pq.top() << endl;
				pq.pop();
			}
		}
		else pq.push(x);
	}

}
