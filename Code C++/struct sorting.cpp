///Struct Sorting
#include<bits/stdc++.h>
using namespace std;

struct A{
  int x,y;
  bool operator < (cosnt A&o) cosnt{
    if(x!=o.x)  return x< o.x ; ///sort x min to max
    return y> o.y ;             ///sort y max to min
  }
};
A a[10010];                     ///array of struct
int main (){
  int n;
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i].x,&a[i].y);
  }
  sort(a,a+n);                  ///sorting
  for(i=0;i<n;i++){
    printf("%d %d\n",a[i].x,a[i].y);
  }
  return 0;
}
