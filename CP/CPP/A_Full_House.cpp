// https://atcoder.jp/contests/abc263/submissions/45459265

#include<iostream>
using namespace std;
int main()
{
    int c[13] = {};
    for (int i=0; i<5; i++) {
        int x; 
        cin >> x;
        --x;
        ++c[x];
    };
    int three = 0, two = 0;
        for (int i=0; i<13; i++) {
        if (c[i]==3) three++;
        if (c[i]==2) two++;
    }

    if (three==1 && two==1) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
return 0;
}

/*

input
1 2 1 2 1
output
Yes

input
12 12 11 1 2
output
No

*/