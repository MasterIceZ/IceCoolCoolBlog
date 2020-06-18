///Cat and Dog (All)
#include <bits/stdc++.h>
using namespace std;
struct A{
    char name[20];
    int val;
    bool operator < (const A&o) const{
    if(val!=o.val)  return val < o.val ;
    return val > o.val ;
    }
};
A a[100100];
int main () {
    int n;
    scanf("%d",&n);
    int len,j,i;
    for(i=0;i<n;i++){
        scanf(" %s",a[i].name);
        len = strlen(a[i].name);
        for(j=0;j<len;j++){
           a[i].val += a[i].name[j] - 'A' ;
        }
    }
    sort(a,a+n);
    printf("%s",a[n-1].name);
    return 0;
    }
