#include<bits/stdc++.h>
using namespace std;

int n, m;
char x[33][33];
bool visited[33][33];

const int di[] = {-1, 0, 0, 1};
const int dj[] = {0, -1, 1 ,0};

void rec(int i, int j){
	if(visited[i][j]){
		return ;
	}
	visited[i][j] = true;
	for(int k=0; k<4; ++k){
		int ii = i + di[k], jj = j + dj[k];
		if(ii < 1 || ii > n || jj < 1 || jj > m || x[ii][jj] == '#'){
			continue;
		}
		rec(ii, jj);
	}
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> x[i][j];
		}
	}
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	rec(a, b);
	cout << (visited[c][d]?"Yes":"No") << "\n";
	return 0;
}
