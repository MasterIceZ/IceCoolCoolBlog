#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=1; i<n; ++i){
		for(int j=1; j<=n; ++j){
			if(n - i > j-1){
				cout << ".";
			}
			else{
				cout << "#";
			}
		}
		for(int j=1; j<n; ++j){
			if(i < j+1){
				cout << ".";
			}
			else{
				cout << "#";
			}
		}
		cout << "\n";
	}
	for(int i=1; i<=2*n-1; ++i){
		cout << "#";
	}
	cout << "\n";
	for(int i=1; i<n; ++i){
		for(int j=1; j<=n; ++j){
			if(i <= j-1){
				cout << "#";
			}
			else{
				cout << ".";
			}
		}
		for(int j=1; j<n; ++j){
			if(n-i > j){
				cout << "#";
			}
			else{
				cout << ".";
			}
		}
		cout << "\n";
	}
	return 0;
}
