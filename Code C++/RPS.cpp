#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r,p,s,ans;
    cin >> r >> p >> s;
    if(r+p+s!=100)
        cout << "BUG";
    else if(r>p && r>s)
        cout << "Rock";
    else if(s>r && s>p)
        cout << "Scissor";
    else if(p>r && p>s)
        cout << "Paper";
    else
        cout << "BUG";
    return 0;
    }
