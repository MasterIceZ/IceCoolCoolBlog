///FizzBuzz
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,x,y;
    cin >> n >> x >> y;
    for(int i=1;i<=n;i++){
        if(i%x==0)
            printf("Fizz");
        if(i%y==0)
            printf("Buzz");
        if(i%y!=0 && i%x!=0)
            printf("%d",i);
        cout << endl;
    }
    return 0;
}
