// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

#include<iostream>
using namespace std;

int fibonacciAt(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else{
        return fibonacciAt(n-1) + fibonacciAt(n-2);
    }
}

int main()
{
    int n;
    cin>>n;

    long long int fibonacci[51];

    fibonacci[1] = 0;
    fibonacci[2] = 1;

    for(int i = 3; i<=n; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    cout<<fibonacci[n];
return 0;
}

/*

input
1
output
0

input
5
output
3

*/