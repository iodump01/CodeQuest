// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int greatest, smallest, middle;
    cin>>a>>b>>c;

    if(a>=b && a>=c)
    {
        greatest = a;
        if(b>=c){
            middle = b;
            smallest = c;
        }
        else{
            middle = c;
            smallest = b;
        }
    }
    else if(b>=a && b>=c){

        greatest = b;
        if(a>=c)
        {
            middle = a;
            smallest = c;
        }
        else
        {
            middle = c;
            smallest = a;
        }
    }
    else{
        greatest = c;
        if(a>=b)
        {
            middle = a;
            smallest = b;
        }
        else{
            middle = b;
            smallest = a;
        }
    }

    cout<<smallest<<endl;
    cout<<middle<<endl;
    cout<<greatest<<endl;

    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
return 0;
}

/*

input
3 -2 1

output
-2
0
10

-2
10
0

*/