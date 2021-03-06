#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename __Tp1>
void __f(const char* name, __Tp1&& __tp1){
    cerr << name << " : " << __tp1 << std::endl;
}
template <typename __Tp1, typename... __Tps>
void __f(const char* names, __Tp1&& __tp1, __Tps&&... __tps){
    const char* comma = strchr(names + 1, ',');
	cerr.write(names, comma - names) << " : " <<  __tp1 << " | " ;
	__f(comma+1, __tps...);
}
#else
#define trace(...)
#endif

typedef long long LL;
const LL inf = 1e15;

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	vector<vector<LL> > D(n, vector<LL> (m, inf));
	for (int i = 0; i < n; i++)
		D[i][i] = 0;
	for (int i = 0; i < m; i++)
	{
		int u, v; LL w;
		scanf("%d%d%lld", &u, &v, &w);
		D[u - 1][v - 1] = w;
	}
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
	int q;
	scanf("%d", &q);
	while (q--)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		printf("%lld\n", D[u - 1][v - 1] == inf? -1: D[u - 1][v - 1]);
	}
	/*
	int __T;
	scanf("%d", &__T);
	for (int t = 1; t <= __T; t++)
	{
	}
	*/
	return 0;
}
