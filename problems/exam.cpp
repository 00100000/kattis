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

	int k;
	cin >> k;
	string me, him;
	cin >> me >> him;
	int agree = 0, dis = 0;
	for (int i = 0; i < (int)me.size(); i++) {
		if (me.at(i) == him.at(i)) {
			agree++;
		} else {
			dis++;
		}
	}

	cout << min(agree, k) + min(dis, (int)me.size() - k);
	return 0;
}
