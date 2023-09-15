// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include<iostream>
using namespace std;
int main()
{
    long int x; 
    cin>>x;
    int flag = 0; //to break the loop when divisor found
    for(int i = 2; i<x; i++)
    {
        if(x%i == 0)
        {
            flag = 1;
            break;
        }

    }
        
    if(flag == 0)
        cout<<"YES";
    else if(flag == 1)
        cout<<"NO";
return 0;
}

/*

input
7
output
YES

input
15
output
NO

*/