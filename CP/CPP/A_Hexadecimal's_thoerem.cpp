// https://codeforces.com/problemset/problem/199/A

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;

    //The problem is too easy.
    //to find the three numbers having the sum = n, we can simply add 2 zeros to it
    // i,e. for 13-> 0 + 0 + 13, 8-> 0 + 0 + 8

    cout<<0<<" "<<0<<" "<<n;

return 0;
}

/*

input
3
output
1 1 1

input
13
output
2 3 8

*/