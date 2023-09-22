#include <bits/stdc++.h>
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif
 
void solve() {
	
	int n, k;
	cin >> n >> k;
	
	string str;
	cin >> str;
	
	int ans = 0;
	
	for(int i = 0; i < n; i++) {
		if(str[i] == 'B') {
			ans++;
			i += k - 1;
		}
	}
	
	cout << ans << endl;
	
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("io/input.txt", "r", stdin);
    freopen("io/output.txt", "w", stdout);
    freopen("io/error.txt", "w", stderr);
    #endif
	
	int t = 1;
	cin >> t;
	
	for(int _t = 1; _t <= t; _t++) {
		debug(Testcase, _t);
		solve();
		crndl;
	}
	
	return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  #include <bits/stdc++.h>
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif
 
void solve() {
	
	int n, water;
	cin >> n >> water;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int start = 0, end = 2e9;
	int ans = 0;
	
	auto isValid = [&] (int height) -> bool {
		long long total = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] > height) continue;
			total += height - a[i];
		}
		return total <= water;
	};
	
	while (start <= end) {
		int mid = start + (end - start) / 2;
		bool check = isValid(mid);
		if(check) {
			ans = mid;
			start = mid + 1;
		} else end = mid - 1;
	}
	
	cout << ans << "\n";
	
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("io/input.txt", "r", stdin);
    freopen("io/output.txt", "w", stdout);
    freopen("io/error.txt", "w", stderr);
    #endif
	
	int t = 1;
	cin >> t;
	
	for(int _t = 1; _t <= t; _t++) {
		debug(Testcase, _t);
		solve();
		crndl;
	}
	
	return 0;
}


+++++++++++++++++++++++++++++++++++=++++++++++++++++++++
	include <bits/stdc++.h>
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif
 
void solve() {
	
	int n, water;
	cin >> n >> water;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int start = 0, end = 2e9;
	int ans = 0;
	
	auto isValid = [&] (int height) -> bool {
		long long total = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] > height) continue;
			total += height - a[i];
		}
		return total <= water;
	};
	
	while (start <= end) {
		int mid = start + (end - start) / 2;
		bool check = isValid(mid);
		if(check) {
			ans = mid;
			start = mid + 1;
		} else end = mid - 1;
	}
	
	cout << ans << "\n";
	
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("io/input.txt", "r", stdin);
    freopen("io/output.txt", "w", stdout);
    freopen("io/error.txt", "w", stderr);
    #endif
	
	int t = 1;
	cin >> t;
	
	for(int _t = 1; _t <= t; _t++) {
		debug(Testcase, _t);
		solve();
		crndl;
	}
	
	return 0;
} 
