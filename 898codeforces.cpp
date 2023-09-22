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
++++++++++++++++++++++++++++++++++++++
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
	
	vector<int> a(n), h(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++) {
		cin >> h[i];
	}
	
	int ans = 0;
	long long sum = 0;
	int start = 0;
	
	for(int end = 0; end < n; end++) {
		if(end > 0 && h[end - 1] % h[end]) {
			sum = 0;
			start = end;
		}
		sum += a[end];
		while(start <= end && sum > k) {
			sum -= a[start];
			start++;
		}
		int len = end - start + 1;
		ans = max(ans, len);
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
} ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


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
	
	string str;
	cin >> str;
	
	int n = str.length();
	
	vector<int> a;
	int zero = 0;
	int sum = 0;
	int mn = n;
	
	for(int start = 0; start < n; start++) {
		
		if(str[start] == 'B') {
			zero++;
			continue;
		}
		
		int end = start;
		while (end < n && str[end] != 'B') end++;
		
		int cnt = end - start;
		a.push_back(cnt);
		sum += cnt;
		mn = min(mn, cnt);
		
		start = end - 1;
	}
	
	if(zero >= a.size()) {
		mn = 0;
	}
	
	cout << sum - mn << endl;
	
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






+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++========+












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
	
	int n, a, b;
	cin >> n >> a >> b;
	
	a--, b--;
	
	vector<int> adj[n];
	
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	if(a == b) {
		cout << "NO\n";
		return;
	}
	
	vector<int> vis(n, 0);
	vector<int> cycle;
	
	function<bool(int,int)> dfs = [&] (int node, int par) -> bool {
		if(vis[node]) {
			cycle.push_back(node);
			return true;
		}
		
		vis[node] = 1;
		
		for(auto child : adj[node]) {
			if(child == par) continue;
			if(dfs (child, node)) {
				cycle.push_back(node);
				return true;
			}
		}
		
		return false;
	};
	
	auto getCycle = [&] () {
		vector<int> res (n, 0);
		for(auto it : cycle) {
			if(res[it]) break;
			res[it] = 1;
		}
		return res;
	};
	
	auto bfs = [&] (int src) {
		vector<int> dist (n, -1);
		queue<int> q;
		
		q.push(src);
		dist[src] = 0;
		
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			
			for(auto child : adj[node]) {
				if(dist[child] != -1) continue;
				dist[child] = dist[node] + 1;
				q.push(child);
			}
		}
		
		return dist;
	};
	
	dfs(b, -1);
	cycle = getCycle(); 
	
	dbg(cycle);
	
	vector<int> distA = bfs(a);
	vector<int> distB = bfs(b);
	
	dbg(distA);
	dbg(distB);
	
	int minB = n, minNode = -1;
	
	auto ckmin = [&] (int &a, int b) {
		return a > b ? a = b, 1 : 0;
	};
	
	for(int i = 0; i < n; i++) {
		if(cycle[i]) {
			if (ckmin (minB, distB[i])) {
				minNode = i;
			}
		}
	}
	
	int minA = distA[minNode];
	
	dbg(minNode, minA, minB);
	
	int isCycle = minB < minA;
	
	cout << (isCycle ? "YES" : "NO") << "\n";
	
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





+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++









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
	
	int n, a, b;
	cin >> n >> a >> b;
	
	a--, b--;
	
	vector<int> adj[n];
	
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	if(a == b) {
		cout << "NO\n";
		return;
	}
	
	vector<int> vis(n, 0);
	vector<int> cycle;
	
	function<bool(int,int)> dfs = [&] (int node, int par) -> bool {
		if(vis[node]) {
			cycle.push_back(node);
			return true;
		}
		
		vis[node] = 1;
		
		for(auto child : adj[node]) {
			if(child == par) continue;
			if(dfs (child, node)) {
				cycle.push_back(node);
				return true;
			}
		}
		
		return false;
	};
	
	auto getCycle = [&] () {
		vector<int> res (n, 0);
		for(auto it : cycle) {
			if(res[it]) break;
			res[it] = 1;
		}
		return res;
	};
	
	auto bfs = [&] (int src) {
		vector<int> dist (n, -1);
		queue<int> q;
		
		q.push(src);
		dist[src] = 0;
		
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			
			for(auto child : adj[node]) {
				if(dist[child] != -1) continue;
				dist[child] = dist[node] + 1;
				q.push(child);
			}
		}
		
		return dist;
	};
	
	dfs(b, -1);
	cycle = getCycle(); 
	
	dbg(cycle);
	
	vector<int> distA = bfs(a);
	vector<int> distB = bfs(b);
	
	dbg(distA);
	dbg(distB);
	
	int minB = n, minNode = -1;
	
	auto ckmin = [&] (int &a, int b) {
		return a > b ? a = b, 1 : 0;
	};
	
	for(int i = 0; i < n; i++) {
		if(cycle[i]) {
			if (ckmin (minB, distB[i])) {
				minNode = i;
			}
		}
	}
	
	int minA = distA[minNode];
	
	dbg(minNode, minA, minB);
	
	int isCycle = minB < minA;
	
	cout << (isCycle ? "YES" : "NO") << "\n";
	
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




+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
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
	
	int n, a, b;
	cin >> n >> a >> b;
	
	a--, b--;
	
	vector<int> adj[n];
	
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	if(a == b) {
		cout << "NO\n";
		return;
	}
	
	vector<int> vis(n, 0);
	vector<int> cycle;
	
	function<bool(int,int)> dfs = [&] (int node, int par) -> bool {
		if(vis[node]) {
			cycle.push_back(node);
			return true;
		}
		
		vis[node] = 1;
		
		for(auto child : adj[node]) {
			if(child == par) continue;
			if(dfs (child, node)) {
				cycle.push_back(node);
				return true;
			}
		}
		
		return false;
	};
	
	auto getCycle = [&] () {
		vector<int> res (n, 0);
		for(auto it : cycle) {
			if(res[it]) break;
			res[it] = 1;
		}
		return res;
	};
	
	auto bfs = [&] (int src) {
		vector<int> dist (n, -1);
		queue<int> q;
		
		q.push(src);
		dist[src] = 0;
		
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			
			for(auto child : adj[node]) {
				if(dist[child] != -1) continue;
				dist[child] = dist[node] + 1;
				q.push(child);
			}
		}
		
		return dist;
	};
	
	dfs(b, -1);
	cycle = getCycle(); 
	
	dbg(cycle);
	
	vector<int> distA = bfs(a);
	vector<int> distB = bfs(b);
	
	dbg(distA);
	dbg(distB);
	
	int minB = n, minNode = -1;
	
	auto ckmin = [&] (int &a, int b) {
		return a > b ? a = b, 1 : 0;
	};
	
	for(int i = 0; i < n; i++) {
		if(cycle[i]) {
			if (ckmin (minB, distB[i])) {
				minNode = i;
			}
		}
	}
	
	int minA = distA[minNode];
	
	dbg(minNode, minA, minB);
	
	int isCycle = minB < minA;
	
	cout << (isCycle ? "YES" : "NO") << "\n";
	
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


++++++++++++++++++++++++++++++++++++++++++++++++++++
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
	
	int n, a, b;
	cin >> n >> a >> b;
	
	a--, b--;
	
	vector<int> adj[n];
	
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	if(a == b) {
		cout << "NO\n";
		return;
	}
	
	vector<int> vis(n, 0);
	vector<int> cycle;
	
	function<bool(int,int)> dfs = [&] (int node, int par) -> bool {
		if(vis[node]) {
			cycle.push_back(node);
			return true;
		}
		
		vis[node] = 1;
		
		for(auto child : adj[node]) {
			if(child == par) continue;
			if(dfs (child, node)) {
				cycle.push_back(node);
				return true;
			}
		}
		
		return false;
	};
	
	auto getCycle = [&] () {
		vector<int> res (n, 0);
		for(auto it : cycle) {
			if(res[it]) break;
			res[it] = 1;
		}
		return res;
	};
	
	auto bfs = [&] (int src) {
		vector<int> dist (n, -1);
		queue<int> q;
		
		q.push(src);
		dist[src] = 0;
		
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			
			for(auto child : adj[node]) {
				if(dist[child] != -1) continue;
				dist[child] = dist[node] + 1;
				q.push(child);
			}
		}
		
		return dist;
	};
	
	dfs(b, -1);
	cycle = getCycle(); 
	
	dbg(cycle);
	
	vector<int> distA = bfs(a);
	vector<int> distB = bfs(b);
	
	dbg(distA);
	dbg(distB);
	
	int minB = n, minNode = -1;
	
	auto ckmin = [&] (int &a, int b) {
		return a > b ? a = b, 1 : 0;
	};
	
	for(int i = 0; i < n; i++) {
		if(cycle[i]) {
			if (ckmin (minB, distB[i])) {
				minNode = i;
			}
		}
	}
	
	int minA = distA[minNode];
	
	dbg(minNode, minA, minB);
	
	int isCycle = minB < minA;
	
	cout << (isCycle ? "YES" : "NO") << "\n";
	
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





++++++++++++++++++++++++++++++++++++++++++\\



	
	
	
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
	
	int n, a, b;
	cin >> n >> a >> b;
	
	a--, b--;
	
	vector<int> adj[n];
	
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	if(a == b) {
		cout << "NO\n";
		return;
	}
	
	vector<int> vis(n, 0);
	vector<int> cycle;
	
	function<bool(int,int)> dfs = [&] (int node, int par) -> bool {
		if(vis[node]) {
			cycle.push_back(node);
			return true;
		}
		
		vis[node] = 1;
		
		for(auto child : adj[node]) {
			if(child == par) continue;
			if(dfs (child, node)) {
				cycle.push_back(node);
				return true;
			}
		}
		
		return false;
	};
	
	auto getCycle = [&] () {
		vector<int> res (n, 0);
		for(auto it : cycle) {
			if(res[it]) break;
			res[it] = 1;
		}
		return res;
	};
	
	auto bfs = [&] (int src) {
		vector<int> dist (n, -1);
		queue<int> q;
		
		q.push(src);
		dist[src] = 0;
		
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			
			for(auto child : adj[node]) {
				if(dist[child] != -1) continue;
				dist[child] = dist[node] + 1;
				q.push(child);
			}
		}
		
		return dist;
	};
	
	dfs(b, -1);
	cycle = getCycle(); 
	
	dbg(cycle);
	
	vector<int> distA = bfs(a);
	vector<int> distB = bfs(b);
	
	dbg(distA);
	dbg(distB);
	
	int minB = n, minNode = -1;
	
	auto ckmin = [&] (int &a, int b) {
		return a > b ? a = b, 1 : 0;
	};
	
	for(int i = 0; i < n; i++) {
		if(cycle[i]) {
			if (ckmin (minB, distB[i])) {
				minNode = i;
			}
		}
	}
	
	int minA = distA[minNode];
	
	dbg(minNode, minA, minB);
	
	int isCycle = minB < minA;
	
	cout << (isCycle ? "YES" : "NO") << "\n";
	
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
	
