#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
using namespace std;
struct A
{
        string name;
        int var;
};
A a[100];

int main ()
{

        int i,player;
        int x;
        string y;
        cin >> player;
        for(i=0;i<player;++i)
        {
                cin >> y >> x;
                a[i].var = x;
                a[i].name = y;
        }

        srand(time(NULL));
        int ans = rand() % 4 + 1;
        //printf("%d\n",ans);
        int n = player;
        for(i=0;i<n;i++)
        {
                if(a[i].var == ans)
                {
                        cout << a[i].name << endl;
                        break;
                }
        }


}
-- INSERT --                                             
