#include <bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i,n,m,k,l,cnt=0;
	cin >> n >> m >> k >> l;
	for(i=n;i<=m;i++){
		cnt += k;
		k += l;
	}
	if(cnt>=1234)
		printf("Yes");
	else
		printf("%d",1234-cnt);
    return 0;
    }
