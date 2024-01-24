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

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename num_t>
using ordered_set = tree<num_t, null_type, less<num_t>, rb_tree_tag, tree_order_statistics_node_update>;

#define read(v) for(auto &x : v) cin >> x;
#define f first
#define s second
#define sz(x) (int)(x).size()
#define pb push_back
#define all(x) x.begin(),x.end()
#define ins insert
#define lb lower_bound
#define ub upper_bound
#define trav(x,v) for(auto &x : v)
#define MOD 998244353

void solve(int test_num){
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
	for(int i=1;i<=testcase;i++){
		solve(i);
	}

	#ifdef LOCAL
		auto end = std::chrono::high_resolution_clock::now();
        cerr << setprecision(4) << fixed;
        cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	#endif
}