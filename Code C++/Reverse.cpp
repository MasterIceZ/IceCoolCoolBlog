#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main (){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		if(a[i]==m){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
