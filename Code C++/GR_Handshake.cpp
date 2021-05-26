#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n, w, cnt = 0, ans = 0;
	cin >> n;
	vector<int>v(n);
	for(auto& x: v){
		cin >> x;
	}
	sort(v.begin(), v.end());
	cin >> w;
	for(auto x: v){
		cnt++;
		ans += x;
		if(cnt == w){
			break;
		}
	}
	cout << ans << "\n";
	return 0;
}
