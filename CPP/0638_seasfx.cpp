#include <bits/stdc++.h>

using namespace std;

typedef long long 				LL;
typedef unsigned long long 		ULL;
typedef vector<int> 			VI;
typedef vector<LL> 				VLL;
typedef pair<int, int> 			PII;
typedef pair<LL, LL> 			PLL;

#define si(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define sull(n) scanf("%llu", &n)
#define sortv(v) sort(v.begin(), v.end())
#define each(it, v) for(__typeof(v.begin()) it(v.begin()); it != v.end(); it++)
#define sz(v) v.size()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define f first
#define s second

int main()
{
	int n, m, idx;
	si(n); si(m);
	VI v(n);
	for (int i = 0; i < n; i++)
		si(v[i]);
	set<int> st;
	VI unq(n, 0);
	unq[n-1] = 1;
	st.insert(v[n-1]);
	for (int i = n - 2; i >= 0; i--)
	{
		unq[i] = unq[i+1];
		if (st.find(v[i]) == st.end())
			st.insert(v[i]), unq[i]++;
	}
	while (m--)
	{
		si(idx);
		printf("%d\n", unq[idx-1]);
	}
	return 0;
}
