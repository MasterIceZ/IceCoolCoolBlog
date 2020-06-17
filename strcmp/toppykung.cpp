#include<bits/stdc++.h>
using namespace std;
struct A{
  char name[30];
  bool operator < (const A&o) const{
    if(strcmp(name,o.name)<0)   return name > o.name ;
    return name < o.name ;
  }
}
A a[1010];
int main (){
  int n;
  cin >> n;
  int  i;
  for(i=0;i<n;i++){
    cin >> a[i].name;
  }
  sort(a,a+n);
  for(i=0;i<n;i++){
    if(i!=0&&!strcmp(a[i].name,a[i-1].name))
      continue ;
    cout << a[i].name << endl;
  }
  return 0;
}
