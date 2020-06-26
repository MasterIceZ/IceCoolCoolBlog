#include <bits/stdc++.h>
using namespace std;
int a[4010];
int main (){
  int i,n,num;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&num);
    a[num]++;
  }
  for(i=0;i<2020;i++){
    if(a[2020+i]==1){
      printf("%d",2020+i);
      return 0;
    }
    else if(a[2020-i]==1){
      printf("%d",2020-i);
      return 0;
    }
  }
  printf("NO");
  return 0;
}
