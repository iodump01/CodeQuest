// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d;

    cin>>a>>b>>c>>d;

    cout<<((a%100)*(b%100)*(c%100)*(d%100))%100;
return 0;
}

/*

input
5 7 2 4

output
80

*/