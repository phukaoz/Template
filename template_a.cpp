/*
	author : phukao
*/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define dbg(x)
#endif

void solve(){
	/* here */
}

int main(){
	#ifdef LOCAL
		auto begin = chrono::high_resolution_clock::now();
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);

	int testcase;
	cin >> testcase;
	while(testcase--){
		solve();
	}

	#ifdef LOCAL
		auto end = std::chrono::high_resolution_clock::now();
        cerr << setprecision(4) << fixed;
        cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	#endif
}