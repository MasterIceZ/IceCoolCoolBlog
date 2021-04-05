// Hydrolyzed~
//#include<bits/stdc++.h>
//using namespace std;
#include<stdio.h>

int min(int a, int b){
	return a>b?b:a;
}

int main (){
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	int q;
	while(q--){
		int n, cnt2, cnt5;
		cnt2 = cnt5 = 0;
		int test = 1;
//		cin >> n;
		scanf("%d" ,&n);
		for(int i=1; i<=n; ++i){
			if(i%2==0){
				int k = i;
				while(k%2==0){
					k/=2;
					cnt2++;
				}
			}
			if(i%5==0){
				int k = i;
				while(k%5==0){
					k/=5;
					cnt5++;
				}
			}
			test *= i;
		}
//		printf("%d\n", test);
//		cout << cnt2 << " " << cnt5 << endl;
//		cout << min(cnt2, cnt5) << endl;
		printf("%d\n", min(cnt2, cnt5));
	}
	return 0;
}
