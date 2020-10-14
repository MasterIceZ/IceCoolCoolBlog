#include<bits/stdc++.h>
using namespace std;
vector<int>timingA(25,0),timingB(25,0),timing(25,0);
void deb(vector<int>arr,int st,int ed);
int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int scopest,scopeed,n,m;
	cin >> scopest >> scopeed;
	cin >> n >> m;
	for(int i=0;i<n;++i){
		int a,b;
		cin >> a >> b;
		timingA[a]+=1;
		timingA[b+1]+=-1;
	}
	for(int i=0;i<m;++i){
		int a,b;
		cin >> a >> b;
		timingB[a]+=1;
		timingB[b+1]+=-1;
	}
	for(int i=1;i<=24;++i){
		timingA[i]+=timingA[i-1];
	}
	//deb(timingA,scopest,scopeed);
	for(int i=1;i<=24;++i){
		timingB[i]+=timingB[i-1];
	}
	//deb(timingB,scopest,scopeed);
	for(int i=scopest;i<=scopeed;++i){
		if(!timingA[i] && !timingB[i]){
			timing[i]=1;
		}
	}
	//deb(timing,scopest,scopeed);
	for(int i=scopest;i<=scopeed;++i){
		if(timing[i]&&timing[i+1]){
			cout << i << " ";
			while(1){
				if(!timing[i+1]){
					cout << i << " ";
					break;
				}
				else{
					++i;
				}
			}
			cout << endl;
		}
	}	
	return 0;
}
void deb(vector<int>arr,int st,int ed){
	for(int i=st;i<=ed;++i){
		cout << arr[i] << " ";
	}
	cout << endl;
	return ;
}
