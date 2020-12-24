#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 42069;
bool mark[1010];
int order[1110];
int mod_of_power(int base,int power){
	if(power==0){
		return 1%MOD;
	}
	int k = mod_of_power(base,power/2)%MOD;
	if(power%2==0){
		return (k*k)%MOD;
	}
	return ((k*k)%MOD*base)%MOD;
}
void sieve(){
	int ptr = 1;
	for(int i=2;i<=600;++i){
		if(mark[i]){
			continue;
		}	
		for(int k=1;k*i<=600;++k){
			mark[i*k] = true;
		}
		order[ptr++] = i;
	}
}
int32_t main (){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int q;
	memset(order,-1,sizeof order);
	memset(mark,false,sizeof mark);
	sieve();
	cin >> q;
	while(q--){
		int x;
		cin >> x;
//		cout << "Debug : " << order[x] << endl;
		int ans = (mod_of_power((int)2,order[x]-1) * (mod_of_power((int)2,order[x])-1))%MOD;
		cout << ans << endl;
	}
	
	return 0;
}
