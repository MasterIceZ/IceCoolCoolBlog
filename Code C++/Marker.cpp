#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,x,m;
	double a=0;
	scanf("%d %d",&n,&x);
	while(n--){
		scanf("%d",&m);
		a += (double)m*(100+(double)x)/100;
		a = ceil(a);
		//cout << a << endl;
	}
	printf("%.0lf",a);
	return 0;
}
