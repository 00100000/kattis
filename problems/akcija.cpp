#include <algorithm>
#include <cassert>
#include <bitset>
#include <deque>
#include <iostream>
#include <climits>
#include <list>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#define dbg(x) cout<<(#x)<<": "<<(x)<<endl
#define dbglp(x) cout<<(#x)<<":"<<endl;for(auto i:x)cout<<i<<" ";cout<<endl
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> books(n);
	for (int i = 0; i < n; i++) {
		cin >> books[i];
		books[i] = 0 - books[i];
	}
	sort(books.begin(), books.end());
	int sum = 0;
	int rem = n % 3;
	for (int i = 0; i < n - rem; i++) {
		if ((i + 1) % 3 != 0) {
			sum -= books[i];
		}
	}
	for (int i = n - rem; i < n; i++) sum -= books[i];

	cout << sum << "\n";
	return 0;
}
