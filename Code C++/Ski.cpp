#include <bits/stdc++.h>
using namespace std;
/**
Map
2*n+1 x m
*/

int main (){
  bool out;
  int now,n,m,i,q,a;
  cin >> n >> m >> q;
  while(q--){
    now = n+1;
    out = false;
    for(i=0;i<m;i++){
      cin >> a;
      if(out)
        continue;
      if(a==1)
        now++;
      else
        now--;
      if(now<=0||now>=2*n+1)
        out = true;
    }
    if(out)
      cout << "0";
    else
      cout << "1";
  }
  return 0;
}
