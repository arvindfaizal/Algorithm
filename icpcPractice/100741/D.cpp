#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	scanf("%lld", &n);
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		long long val;
		scanf("%lld", &val);
		ans ^= val;
	}
	printf("%lld\n", ans);
	return 0;
}
