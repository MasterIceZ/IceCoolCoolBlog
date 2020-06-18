#include<bits/stdc++.h>
using namespace std;
struct A {
    char name[31];
    bool operator < (const A&o) const {
        if(strcmp(name,o.name)<0)   return name > o.name ;
        return name < o.name ;
        }
    };
A a[1010];
int main () {
    int n,i;
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        scanf(" %s",a[i].name);
        }
    sort(a,a+n);
    for(i=0; i<n; i++) {
        if(!strcmp(a[i-1].name,a[i].name)&&i!=0)
            continue ;
        printf("%s\n",a[i].name);
        }
    return 0;
    }
