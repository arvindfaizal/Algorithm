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

int main()
{
	int n;
	scanf("%d", &n);
	unordered_map<int, int> u_map;
	vector<int> ans;
	unordered_set<int> _ans;
	for (int i = 0; i < n; i++)
	{
		u_map.clear();
		int val;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &val);
			u_map[val]++;
		}
		int toPut;
		for (auto& u: u_map)
			if (u.first + u.second == n)
			{
				toPut = u.first;
				break;
			}
		if (_ans.count(toPut)) toPut++;
		_ans.insert(toPut);
		ans.push_back(toPut);
	}
	for (auto& a: ans)
		printf("%d ", a);
	printf("\n");
	return 0;
}
