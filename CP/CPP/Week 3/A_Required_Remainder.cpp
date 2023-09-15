// https://codeforces.com/problemset/problem/1374/A

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    long long int x, y, n;

    cin>>x>>y>>n;

    int a = n%x;
    if(a-y>=0)
        n = n-(a-y);
    else
        n = n-a-x+y;
    cout<<n<<endl;
    }
return 0;
}

/*
input
7
7 5 12345
5 0 4
10 5 15
17 8 54321
499999993 9 1000000000
10 5 187
2 0 999999999

output
12339
0
15
54306
999999995
185
999999998

*/