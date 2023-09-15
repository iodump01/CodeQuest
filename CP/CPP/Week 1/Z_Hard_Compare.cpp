// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    long double A,B,C,D;
    cin>>A>>B>>C>>D;

    B = B/1e12;
    D = D/1e12; //Dividing by 1e12 i,e. 10^12 to approximate the solution

    if(pow(A,B) > pow(C,D))//using power function from math.h headerfile
        cout<<"YES";
    else
        cout<<"NO";

return 0;
}

/*

input
3 2 5 4
output
NO

input
5 2 4 2
output
YES

*/