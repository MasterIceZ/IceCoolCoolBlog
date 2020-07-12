#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
char a[10];
int main (){
  int n,m;
  cin >> n >> m;
  int sum = n+m;
  sprintf(a , "%d" , sum);
  int len = strlen(a);
  for(int i=len-1;i>=0;i--){
    cout << a[i];
  }
  return 0;
}
