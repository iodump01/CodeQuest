// https://codeforces.com/problemset/problem/214/A

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int count = 0;

    int maxVal = max(n,m);
    for(int a = 0; a<=maxVal; a++)
    {
        for(int b = 0; b<=maxVal; b++)
        {
            if((a*a + b == n) && (a + b*b == m))
                count++;
        }
    }

    cout<<count;

return 0;
}

/*

input
9 3
output
1

input
4 20
output
0

*/