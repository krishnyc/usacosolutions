//10/10 test cases passed--"Cow Gymnastics"
//10.07.2022
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> pi;
const int INF = 2e5+10, MOD = 1e9+7;
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" = "<<x<<endl
#define print(x) cout<<x<<endl
#define mp(x,y) make_pair(x,y)
#define np(x) next_permutation(all(x))
#define F first
#define S second
#define sz(v) int(v.size())
#define FOR(i, n) for(int i=0; i<n; ++i)

int main() {
	//ifstream cin("gymnastics.in");
	//ofstream cout("gymnastics.out");
	int k,n;cin>>k>>n;
	int t[k][n];
	for(int i=0; i<k; ++i) {
		for(int j=0; j<n; ++j) {
			cin >> t[i][j];
		}
	}
	int ans = 0;
	int ANS = 0;
	int temp1, temp2;
	for(int a = 1; a < n; ++ a) {
		for(int b = a + 1; b <= n; ++ b) {
			for(int i = 0; i < k; ++ i) {
				for(int j = 0; j < n; ++ j) {
					if(t[i][j] == a) {temp1 = j;}
					if(t[i][j] == b) {temp2 = j;}
				}
				if(temp1 > temp2) ans++;
			}
			if(ans == k || ans == 0) {
				ANS++;
			}
			ans = 0;
		}
	}
	print(ANS);
}
